#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFadeMode : uint8
{
	None                           = 0,
	FadeIn                         = 1,
	FadeOut                        = 2,
	EFadeMode_MAX                  = 3,
};

enum class ELoadingReason : uint8
{
	None                           = 0,
	WaitForServer                  = 1,
	WaitForMap                     = 2,
	WaitForTravel                  = 3,
	WaitForGeneratingWorld         = 4,
	WaitForAnotherServer           = 5,
	WaitingForStart                = 6,
	WaitingForSeamlessTravel       = 7,
	WaitingForDeployment           = 8,
	WaitingForResolvingDeployment  = 9,
	WaitingForPlayerDependencies   = 10,
	ELoadingReason_MAX             = 11,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


