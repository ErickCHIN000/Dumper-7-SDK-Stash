#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EEOSEcom : uint8
{
	EE_UnknownError                = 0,
	EE_MAX                         = 1,
};

enum class EEOSPresence : uint8
{
	EP_UnknownError                = 0,
	EP_MAX                         = 1,
};

enum class EEOSFriends : uint8
{
	EF_UnknownError                = 0,
	EF_MAX                         = 1,
};

enum class EEOSAuth : uint8
{
	EA_UnknownError                = 0,
	EA_MAX                         = 1,
};

enum class EEOSResults : uint8
{
	ER_Success                     = 0,
	ER_AlreadyInitialized          = 1,
	ER_AlreadyShutdown             = 2,
	ER_NotInitialized              = 3,
	ER_PlatformFailed              = 4,
	ER_NoConnection                = 5,
	ER_InvalidCredentials          = 6,
	ER_InvalidUser                 = 7,
	ER_InvalidAuth                 = 8,
	ER_AccessDenied                = 9,
	ER_MissingPermissions          = 10,
	ER_TokenNotAccount             = 11,
	ER_TooManyRequests             = 12,
	ER_AlreadyPending              = 13,
	ER_InvalidParameters           = 14,
	ER_InvalidRequest              = 15,
	ER_UnrecognizedResponse        = 16,
	ER_IncompatibleVersion         = 17,
	ER_NotConfigured               = 18,
	ER_AlreadyConfigured           = 19,
	ER_NotImplemented              = 20,
	ER_Canceled                    = 21,
	ER_NotFound                    = 22,
	ER_OperationWillRetry          = 23,
	ER_NoChange                    = 24,
	ER_VersionMismatch             = 25,
	ER_LimitExceeded               = 26,
	ER_Disabled                    = 27,
	ER_DuplicateNotAllowed         = 28,
	ER_MissingParameters           = 29,
	ER_UnknownError                = 30,
	ER_MAX                         = 31,
};

enum class EEOSResultType : uint8
{
	RT_Result                      = 0,
	RT_Auth                        = 1,
	RT_Friends                     = 2,
	RT_Presence                    = 3,
	RT_Ecom                        = 4,
	RT_Unknown                     = 5,
	RT_MAX                         = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


