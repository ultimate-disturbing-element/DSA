pipeline{
    agent any 
    stages{
     stage("Prepare") {
            steps {
                echo "INPROGRESS"
            }
        }

        stage("Build") {
            steps {
                git git(
                    url: "https://github.com/Lyghtjr/DSA.git",
                    branch: "*/main",
                    credentialsId: "lyghtjr1530",
                    changelog: true,
                    poll: true
                )
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
}