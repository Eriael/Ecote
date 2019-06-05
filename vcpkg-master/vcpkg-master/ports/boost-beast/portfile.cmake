# Automatically generated by boost-vcpkg-helpers/generate-ports.ps1

include(vcpkg_common_functions)

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/beast
    REF boost-1.70.0
    SHA512 7f0c36d80f26b47b902bf78e066dfa3b1fd5ef5e5088c00d2aabef16805531b993efa94a25d84e8d1321c41fc021d46da25cb3ffe49fa42ae67813af333f453d
    HEAD_REF master
)

include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})