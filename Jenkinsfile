pipeline {
    agent any
    stages {
    stage('Build)
    {
      steps {
        sh 'sleep 5'; echo "this is a build stage"

      }
    }
    stage('Test)
    {
      sh '''
         sleep 5
         echo "this is a test stage"
     '''    
    }
    stage('Deploy') {
      sh '''
         sleep 5
         echo "this is a Deploy stage"
         '''
    }
  }
}
