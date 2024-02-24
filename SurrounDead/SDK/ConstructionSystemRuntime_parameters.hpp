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
// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
struct UConstructionSystemBuildTool_SetActivePrefab_Params
{
public:
	class UPrefabricatorAssetInterface*          InActivePrefabAsset;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
struct UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Params
{
public:
	float                                        NumSteps;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
struct UConstructionSystemComponent_SetActiveTool_Params
{
public:
	enum class EConstructionSystemToolType       InToolType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
struct UConstructionSystemComponent_GetTool_Params
{
public:
	enum class EConstructionSystemToolType       InToolType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C28[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UConstructionSystemTool*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
struct UConstructionSystemComponent_GetActiveToolType_Params
{
public:
	enum class EConstructionSystemToolType       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
struct UConstructionSystemComponent_GetActiveTool_Params
{
public:
	class UConstructionSystemTool*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
struct UConstructionSystemComponent_EnableConstructionSystem_Params
{
public:
	enum class EConstructionSystemToolType       InToolType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
struct UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SaveSlotName;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSavePlayerState;                                  // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
struct UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LevelName;                                         // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbsolute;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D15[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SaveSlotName;                                      // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D17[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
struct UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
struct IConstructionSystemBuildUI_SetUIAsset_Params
{
public:
	class UConstructionSystemUIAsset*            UIAsset;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
struct IConstructionSystemBuildUI_SetConstructionSystem_Params
{
public:
	class UConstructionSystemComponent*          ConstructionSystem;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


