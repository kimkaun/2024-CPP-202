#include <SFML/Graphics.hpp>

// Ball 클래스 정의
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setRadius(10.f);
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(10.f, 10.f);
        velocity = { -8.f, -8.f };
    }

    void update() {
        shape.move(velocity);

        if (left() < 0) velocity.x = 8.f;
        else if (right() > 800) velocity.x = -8.f;

        if (top() < 0) velocity.y = 8.f;
        else if (bottom() > 600) velocity.y = -8.f;
    }

    float left() { return shape.getPosition().x - shape.getRadius(); }
    float right() { return shape.getPosition().x + shape.getRadius(); }
    float top() { return shape.getPosition().y - shape.getRadius(); }
    float bottom() { return shape.getPosition().y + shape.getRadius(); }
};

// Brick 클래스 정의
class Brick {
public:
    sf::RectangleShape shape;
    bool destroyed = false;

    Brick(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ 60.f, 20.f });
        shape.setFillColor(sf::Color::Yellow);
        shape.setOrigin(30.f, 10.f);
    }
};

// Paddle 클래스 정의
class Paddle {
public:
    sf::RectangleShape shape;
    const float paddleWidth = 100.f;
    const float paddleHeight = 20.f;
    const float paddleVelocity = 10.f;

    Paddle(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ paddleWidth, paddleHeight });
        shape.setFillColor(sf::Color::Blue);
        shape.setOrigin(paddleWidth / 2.f, paddleHeight / 2.f);
    }

    void update() {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && left() > 0) {
            shape.move(-paddleVelocity, 0.f);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && right() < 800) {
            shape.move(paddleVelocity, 0.f);
        }
    }

    float left() { return shape.getPosition().x - shape.getSize().x / 2.f; }
    float right() { return shape.getPosition().x + shape.getSize().x / 2.f; }
    // 지금 당장은 쓸모가 없지만, 확장을 고려해서 일단 놔두겠다.
    float top() { return shape.getPosition().y - shape.getSize().y / 2.f; }
    float bottom() { return shape.getPosition().y + shape.getSize().y / 2.f; }
};

const int brick_row = 4;
const int brick_column = 7;

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       // 초당 프레임을 60으로

    Ball ball(800 / 2.f, 300.f);
    Paddle paddle(400.f, 550.f);  //paddle의 위치
    Brick bricks[brick_row][brick_column];

    for (int i = 0; i < brick_row; ++i) {
        for (int j = 0; j < brick_column; ++j) {
            bricks[i][j].setPosition(200 + (60 + 10) * j, 200 + (20 + 10) * i);
        }
    }

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        paddle.update();
        ball.update();

        // Paddle과 Ball의 충돌 처리
        if (ball.shape.getGlobalBounds().intersects(paddle.shape.getGlobalBounds())) {
            ball.velocity.y = -ball.velocity.y;
        }

        // Brick과 Ball의 충돌 처리
        for (int i = 0; i < brick_row; ++i) {
            for (int j = 0; j < brick_column; ++j) {
                if (!bricks[i][j].destroyed && ball.shape.getGlobalBounds().intersects(bricks[i][j].shape.getGlobalBounds())) {
                    bricks[i][j].destroyed = false;
                    bricks[i][j].destroyed = true;
                    ball.velocity.y = -ball.velocity.y;
                 //    ball.velocity.x = -ball.velocity.x;
                }
            }
        }

        // 화면 지우기
        window.clear(sf::Color::White);

        // Paddle, Ball, Brick 그리기
        window.draw(paddle.shape);
        window.draw(ball.shape);
        for (int i = 0; i < brick_row; ++i) {
            for (int j = 0; j < brick_column; ++j) {
                
            }
        }

        // 화면 업데이트
        window.display();
    }

    return 0;
}
