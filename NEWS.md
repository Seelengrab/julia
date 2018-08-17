Julia v1.0.0 Release Notes
==========================

Julia v1.0 is identical to the v0.7 release, with the exception that
it removes all deprecations and deprecation related warnings. When
upgrading a codebase from v0.6, the process is to first get the code
to work on v0.7, and fix all the deprecation warnings. Once the code
runs on v0.7 without warnings, it should be good to run on v1.0.

Refer to the [Release Notes for
v0.7](https://github.com/JuliaLang/julia/blob/master/HISTORY.md) for a
detailed list of changes from Julia v0.6.

Deprecated or removed
---------------------

The old package manager (now called `OldPkg`) has been moved to a
separate repository at https://github.com/JuliaArchive/OldPkg.jl ([#27930])

<!--- generated by NEWS-update.jl: -->
[#27930]: https://github.com/JuliaLang/julia/issues/27930