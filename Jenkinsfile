pipeline {
    agent any

    stages {

        stage('Clone Repository') {
            steps {
                echo "Cloning C project from GitHub"
                git(url: 'https://github.com/Namitha2000/c-project.git', branch: 'main')
            }
        }

        stage('Build & Test') {
            parallel {
                stage('Build') {
                    steps {
                        echo "Compiling the C project"
                        sh 'make'
                    }
                }
                stage('Run Tests') {
                    steps {
                        echo "Running test programs"
                        sh '''
                        # Run executable if it exists
                        if [ -f ABC.exe ]; then
                            ./ABC.exe || true
                        fi
                        '''
                    }
                }
            }
        }

        stage('Archive Artifacts') {
            steps {
                echo "Saving compiled binaries"
                archiveArtifacts artifacts: '*.o, *.exe', fingerprint: true
            }
        }
    }
}

