pipeline{
    agent any 
     stage("Prepare") {
            steps {
                echo "INPROGRESS"
            }
        }

        stage("Build") {
            steps {
                git "https://github.com/Lyghtjr/DSA.git"
            }
        }

        stage("Run tests") {
            steps {
              echo "Start Test"
            }
        }

        stage("Determine new version") {
            when {
                branch "master"
            }

            steps {
                echo "New Version"
            }
        }
}