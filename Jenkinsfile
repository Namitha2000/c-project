pipeline {
    agent none
    stages {
        stage('Build') {
            agent { label 'SlaveNode' }
            steps {
                sh 'sleep 5'
                echo "This is a build stage"
            }
        }

        stage('Test') {
            agent { label 'SlaveNode' }
            steps {
                sh '''
                    sleep 5
                    echo "This is a test stage"
                '''
            }
        }

        stage('Deploy') {
            agent { label 'master' }
            steps {
                sh '''
                    sleep 5
                    echo "This is a deploy stage"
                '''
            }
        }
    }
}


