# Installation

{{Name}} theme uses [Gulp](http://gulpjs.com) to compile Sass. Gulp needs Node.

#### Step 1
Make sure you have Node and npm installed.
You can read a guide on how to install node here: https://docs.npmjs.com/getting-started/installing-node.
It is recommended that you use Node Version Manager nvm. You can use `brew install nvm`.

#### Step 2
CD into your subtheme and run `nvm use`. If you do not have the correct version
Node installed, install it using `nvm install VERSION`.

#### Step 2
Install bower: `npm install -g bower`.

#### Step 3
Go to the root of {{Name}} theme and run the following commands: `npm run setup`.

#### Step 4
Update `browserSyncProxy` in **config.json**.

#### Step 5
Run the following command to compile Sass and watch for changes: `gulp`.

# Building a new subtheme from the SiteNow Kit
Check out the [Kit instructions](KIT.md).
