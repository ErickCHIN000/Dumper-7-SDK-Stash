#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function Ansel.AnselFunctionLibrary.StopSession
struct UAnselFunctionLibrary_StopSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Ansel.AnselFunctionLibrary.StartSession
struct UAnselFunctionLibrary_StartSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
struct UAnselFunctionLibrary_SetUIControlVisibility_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIControlEffectTarget            UIControlTarget;                                   // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisible;                                        // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetSettleFrames
struct UAnselFunctionLibrary_SetSettleFrames_Params
{
public:
	int32                                        NumSettleFrames;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
struct UAnselFunctionLibrary_SetIsPhotographyAllowed_Params
{
public:
	bool                                         bIsPhotographyAllowed;                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
struct UAnselFunctionLibrary_SetCameraMovementSpeed_Params
{
public:
	float                                        TranslationSpeed;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
struct UAnselFunctionLibrary_SetCameraConstraintDistance_Params
{
public:
	float                                        MaxCameraDistance;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
struct UAnselFunctionLibrary_SetCameraConstraintCameraSize_Params
{
public:
	float                                        CameraSize;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
struct UAnselFunctionLibrary_SetAutoPostprocess_Params
{
public:
	bool                                         bShouldAutoPostprocess;                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Ansel.AnselFunctionLibrary.SetAutoPause
struct UAnselFunctionLibrary_SetAutoPause_Params
{
public:
	bool                                         bShouldAutoPause;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
struct UAnselFunctionLibrary_IsPhotographyAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
struct UAnselFunctionLibrary_IsPhotographyAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
struct UAnselFunctionLibrary_ConstrainCameraByGeometry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NewCameraLocation;                                 // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousCameraLocation;                            // 0x14(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OriginalCameraLocation;                            // 0x20(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutCameraLocation;                                 // 0x2C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
struct UAnselFunctionLibrary_ConstrainCameraByDistance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NewCameraLocation;                                 // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousCameraLocation;                            // 0x14(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OriginalCameraLocation;                            // 0x20(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutCameraLocation;                                 // 0x2C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


