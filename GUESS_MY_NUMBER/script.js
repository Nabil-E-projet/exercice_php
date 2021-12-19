'use strict';

//const secretNumber = Math.trunc(Math.random() * 20) + 1;
let score = 20;

function randomNumber() {
    return Math.trunc(Math.random() * 20) + 1;
}
let secretNumber = randomNumber();

//document.querySelector('.number').textContent = secretNumber;

document.querySelector('.check').addEventListener('click', function () {

    const guess = document.querySelector('.guess').value;
    //Quand il y'a rien dans le input
    if (!guess) {
        document.querySelector('.message').textContent = '🛑 No number !';
    }
    //quand le joueur gagne
    else if (guess == secretNumber) {
        document.querySelector('.message').textContent = 'Correct Number !🔥';

        document.querySelector('body').style.backgroundColor = '#60b347';

        document.querySelector('.number').style.width = '30rem';

        document.querySelector('.number').textContent = secretNumber;
    }
    //quand la variable guess est trop haute
    else if (guess > secretNumber) {
        if (score > 1) {
            document.querySelector('.message').textContent = 'Too high! 📈';

            score--;

            document.querySelector('.score').textContent = score;

        } else {
            document.querySelector('.message').textContent = '💥You lost!';

            document.querySelector('.score').textContent = 0;

            document.querySelector('body').style.backgroundColor = '#FF5733';

            document.querySelector('.number').style.width = '30rem';

        }

    }
    //quand la variable guess est trop bas

    else if (guess < secretNumber) {
        if (score > 1) {
            document.querySelector('.message').textContent = 'Too low! 📉';

            score--;

            document.querySelector('.score').textContent = score;
        } else {
            document.querySelector('.message').textContent = '💥You lost!';

            document.querySelector('.score').textContent = 0;

            document.querySelector('body').style.backgroundColor = '#FF5733';

            document.querySelector('.number').style.width = '30rem';

        }
    }
    document.querySelector('.again').addEventListener('click', function () {

        score = 20;

        secretNumber = randomNumber();

        document.querySelector('.score').textContent = score;

        document.querySelector('.message').textContent = 'Start guessing...';

        document.querySelector('body').style.backgroundColor = '#222';

        document.querySelector('.number').style.width = '15rem';

        document.querySelector('.number').textContent = '?';

        document.querySelector('.guess').value = null;


    });
});
