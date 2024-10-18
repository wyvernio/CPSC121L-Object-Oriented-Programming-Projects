# Front room

A cozy front room, but no treasure. The tracks head into the kitchen. Let's go up to the house/ directory and into the kitchen/ instead!

Don't forget you can type ``pwd`` to figure out where you are right now!

Note that when you type ``pwd`` your full location is printed, and it starts with a ``\``. That slash indicates an absolute path, whereas a path that does not start with a ``\`` is a relative path to the current working directory.

So from the house directory, we could type the relative path to the kitchen directory, and it would work:

```
cd kitchen
```

But we cannot do this, because there is no kitchen directory at the root of your filesystem:

```
cd /kitchen
```

Ready to go back and look in the kitchen?

```
cd ..
cd kitchen
ls
cat README.md
```
