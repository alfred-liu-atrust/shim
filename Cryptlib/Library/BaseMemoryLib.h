#ifndef __BASE_MEMORY_LIB__
#define __BASE_MEMORY_LIB__

CHAR8 *
ScanMem8 (
    IN CHAR8          *Buffer,
    IN UINTN           Size,
    IN CHAR8           Value
    );

UINT32
WriteUnaligned32(
    UINT32            *Buffer,
    UINT32             Value
    );

CHAR8 *
AsciiStrCat(
    CHAR8             *Destination,
    CHAR8             *Source
    );

CHAR8 *
AsciiStrCpy(
    CHAR8             *Destination,
    CHAR8             *Source
    );

CHAR8 *
AsciiStrnCpy(
    CHAR8             *Destination,
    CHAR8             *Source,
    UINTN              count
    );

UINTN
AsciiStrSize(
    CHAR8             *string
    );

#endif
