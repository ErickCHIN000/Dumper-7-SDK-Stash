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

// 0x1 (0x1 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.HasRegionHiding
struct UBP_CollectedVisualMeshData_C_HasRegionHiding_Params
{
public:
	bool                                         bHasRegionHiding;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetRandomSeed
struct UBP_CollectedVisualMeshData_C_GetRandomSeed_Params
{
public:
	int32                                        OutRandomSeed;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetGemOverrides
struct UBP_CollectedVisualMeshData_C_GetGemOverrides_Params
{
public:
	TMap<enum class EGemRegions, double>         OutGemOverrides;                                   // 0x0(0x50)(Parm, OutParm)
};

// 0x2 (0x2 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.TryGetHatType
struct UBP_CollectedVisualMeshData_C_TryGetHatType_Params
{
public:
	bool                                         bHasHatType;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHatType                          OutHatType;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x102 (0x102 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeRegionHiding
struct UBP_CollectedVisualMeshData_C_InitializeRegionHiding_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FItemData_RegionHiding                CallFunc_TryGetItemDataRegionHiding_OutData;       // 0xD8(0x28)(None)
	enum class EGetResult                        CallFunc_TryGetItemDataRegionHiding_Branches;      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetMaterialOverrides
struct UBP_CollectedVisualMeshData_C_GetMaterialOverrides_Params
{
public:
	TMap<enum class ECostumeRegions, struct FResourceCustomizationData_Loaded> MaterialOverridesLoaded;                           // 0x0(0x50)(Parm, OutParm)
};

// 0x50 (0x50 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetMetalOverrides
struct UBP_CollectedVisualMeshData_C_GetMetalOverrides_Params
{
public:
	TMap<enum class EMetalRegions, double>       MetalOverrides;                                    // 0x0(0x50)(Parm, OutParm)
};

// 0x133 (0x133 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeEquippableData
struct UBP_CollectedVisualMeshData_C_InitializeEquippableData_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FItemData_Equippable                  CallFunc_TryGetItemDataEquippable_OutData;         // 0xD8(0x58)(None)
	enum class EGetResult                        CallFunc_TryGetItemDataEquippable_Branches;        // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipSlotType                   CallFunc_GetEquipmentSlotTypeForTag_SlotType;      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetItemDisplayName
struct UBP_CollectedVisualMeshData_C_GetItemDisplayName_Params
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_TryGetItemData_ItemData;                  // 0x10(0xD8)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetItemData_Branches;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDefaultItemName_ReturnValue;           // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AddVisualMesh
struct UBP_CollectedVisualMeshData_C_AddVisualMesh_Params
{
public:
	struct FItemData_VisualMesh                  VisualMesh;                                        // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FCharacterCustomization_UnprocessedMeshData CurrentUnprocessedData;                            // 0xA0(0xD8)(Edit, BlueprintVisible)
};

// 0x2 (0x2 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.HasFirstPersonAppearanceMesh
struct UBP_CollectedVisualMeshData_C_HasFirstPersonAppearanceMesh_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.HasThirdPersonAppearanceMesh
struct UBP_CollectedVisualMeshData_C_HasThirdPersonAppearanceMesh_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetLoadedMeshData
struct UBP_CollectedVisualMeshData_C_GetLoadedMeshData_Params
{
public:
	struct FCharacterCustomization_LoadedMeshData LoadedMeshData;                                    // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x190 (0x190 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssignRegionMaterialParameters
struct UBP_CollectedVisualMeshData_C_AssignRegionMaterialParameters_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECostumeRegions>           CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   CallFunc_Array_Get_Item;                           // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B22[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceCustomizationData            CallFunc_Map_Find_Value;                           // 0x28(0xB8)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceCustomizationData_Loaded     K2Node_MakeStruct_ResourceCustomizationData_Loaded; // 0x118(0x78)(NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssignMeshAndAnimData
struct UBP_CollectedVisualMeshData_C_AssignMeshAndAnimData_Params
{
public:
	struct FCharacterCustomization_LoadedMeshData LoadedData;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FCharacterCustomization_UnloadedMeshData UnloadedData;                                      // 0x10(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMesh*                         K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsAnim_Instance;           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetUnloadedMeshAnimationBlueprint
struct UBP_CollectedVisualMeshData_C_GetUnloadedMeshAnimationBlueprint_Params
{
public:
	TSoftClassPtr<class UAnimInstance>           MeshAnimationBlueprint;                            // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetUnloadedAppearanceMesh
struct UBP_CollectedVisualMeshData_C_GetUnloadedAppearanceMesh_Params
{
public:
	TSoftObjectPtr<class USkeletalMesh>          AppearanceMesh;                                    // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ClassesToLoad
struct UBP_CollectedVisualMeshData_C_ClassesToLoad_Params
{
public:
	TArray<TSoftClassPtr<class UObject>>         Classes;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<TSoftClassPtr<class UObject>>         K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
};

// 0x115 (0x115 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssetsToLoad
struct UBP_CollectedVisualMeshData_C_AssetsToLoad_Params
{
public:
	TArray<TSoftObjectPtr<class UObject>>        Assets;                                            // 0x0(0x10)(Parm, OutParm)
	TArray<TSoftObjectPtr<class UObject>>        AllAssets;                                         // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FResourceCustomizationData>    CallFunc_Map_Values_Values;                        // 0x30(0x10)(ReferenceParm)
	struct FResourceCustomizationData            CallFunc_Array_Get_Item;                           // 0x40(0xB8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D02[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UObject>>        K2Node_MakeArray_Array;                            // 0x100(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssignLoadedData
struct UBP_CollectedVisualMeshData_C_AssignLoadedData_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCustomization_LoadedMeshData CurrentLoadedEntry;                                // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FCharacterCustomization_UnloadedMeshData CurrentUnloadedEntry;                              // 0x18(0x50)(Edit, BlueprintVisible)
};

// 0x30 (0x30 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetOwnerName
struct UBP_CollectedVisualMeshData_C_GetOwnerName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerOrNPCName_Name;                  // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x4F8 (0x4F8 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetDebugInfo
struct UBP_CollectedVisualMeshData_C_GetDebugInfo_Params
{
public:
	class FString                                DebugInfo;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInterface*                    LoadedMaterial;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        InstancedSlotStrings;                              // 0x18(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        FPMaterialNames;                                   // 0x28(0x10)(Edit, BlueprintVisible)
	class FString                                FPMeshName;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                TPMeshName;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  BaseData;                                          // 0x58(0x18)(Edit, BlueprintVisible)
	class FText                                  ItemName;                                          // 0x70(0x18)(Edit, BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_GetUnloadedAppearanceMesh_AppearanceMesh; // 0x88(0x28)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB0(0x50)(HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetAppearanceMesh_AppearanceMesh;         // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetJoinedStringsOrNone_Joined;            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FormatSoftRefName_Name;                   // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_IndentString_OutString;                   // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x138(0x18)(None)
	class FString                                CallFunc_GetItemDisplayName_ItemName;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x160(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1B0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1C8(0x50)(HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x218(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x230(0x18)(None)
	class FString                                CallFunc_GetJoinedStringsOrNone_Joined_1;          // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x258(0x18)(None)
	class FString                                CallFunc_IndentString_OutString_1;                 // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x280(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x2D0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x2E8(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x338(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x358(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x3A8(0x10)(ReferenceParm)
	class FText                                  K2Node_Select_Default;                             // 0x3B8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x3D0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x3E8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x438(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x448(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0x460(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x4B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x4C0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x4D0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x4E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x220 (0x220 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ApplyInstancedData
struct UBP_CollectedVisualMeshData_C_ApplyInstancedData_Params
{
public:
	struct FEquippedInstanceData                 InstancedData;                                     // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        CurrentIndex;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMetalRegions                     Temp_byte_Variable;                                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2088[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMetalRegions                     Temp_byte_Variable_1;                              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_208A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2098[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGemRegions                       Temp_byte_Variable_2;                              // 0x58(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMaterialRegionInstanceData           CallFunc_Array_Get_Item;                           // 0x60(0xC0)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   Temp_byte_Variable_3;                              // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   Temp_byte_Variable_4;                              // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   Temp_byte_Variable_5;                              // 0x136(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   Temp_byte_Variable_6;                              // 0x137(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   Temp_byte_Variable_7;                              // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   Temp_byte_Variable_8;                              // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECostumeRegions                   K2Node_Select_Default;                             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item_1;                         // 0x148(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_GemSwatch        CallFunc_GetDataTableRowFromName_OutRow;           // 0x160(0x10)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2108[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item_2;                         // 0x178(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2119[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_MetalSwatch      CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x190(0x68)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_212A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2138[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMetalRegions                     K2Node_Select_Default_1;                           // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2141[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Add_Value_ImplicitCast;               // 0x210(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Map_Add_Value_ImplicitCast_1;             // 0x218(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetRegionHiding
struct UBP_CollectedVisualMeshData_C_GetRegionHiding_Params
{
public:
	struct FItemData_RegionHiding                RegionHiding;                                      // 0x0(0x28)(Parm, OutParm)
};

// 0x258 (0x258 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeVisualMeshData
struct UBP_CollectedVisualMeshData_C_InitializeVisualMeshData_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FItemData_VisualMesh                  CallFunc_TryGetItemDataVisualMesh_OutData;         // 0xD8(0xA0)(None)
	enum class EGetResult                        CallFunc_TryGetItemDataVisualMesh_Branches;        // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21F4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCustomization_UnprocessedMeshData K2Node_MakeStruct_CharacterCustomization_UnprocessedMeshData; // 0x180(0xD8)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.SetInstancedData
struct UBP_CollectedVisualMeshData_C_SetInstancedData_Params
{
public:
	struct FEquippedInstanceData                 InstancedData;                                     // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x231 (0x231 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.SelectAppearanceMeshes
struct UBP_CollectedVisualMeshData_C_SelectAppearanceMeshes_Params
{
public:
	TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> FirstPersonMeshMap;                                // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> ThirdPersonMeshMap;                                // 0x50(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         HasFirstPersonMaterialOverrides;                   // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          FirstPersonMesh;                                   // 0xA8(0x28)(Parm, OutParm, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          ThirdPersonMesh;                                   // 0xD0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          ThirdPerson;                                       // 0xF8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          FirstPerson;                                       // 0x120(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EBodyType                         OwnerBodyType;                                     // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetItemDisplayName_ItemName;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Map_Find_Value;                           // 0x1A0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Map_Find_Value_1;                         // 0x1E0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetOwnerName_Name;                        // 0x210(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EBodyType                         CallFunc_GetBodyType_BodyType;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18A (0x18A - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ProcessMeshData
struct UBP_CollectedVisualMeshData_C_ProcessMeshData_Params
{
public:
	TSoftObjectPtr<class USkeletalMesh>          SelectedMesh;                                      // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2396[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCustomization_UnprocessedMeshData CurrentUnprocessedData;                            // 0x30(0xD8)(Edit, BlueprintVisible)
	enum class EBodyType                         CallFunc_GetBodyType_BodyType;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCustomization_UnloadedMeshData K2Node_MakeStruct_CharacterCustomization_UnloadedMeshData; // 0x110(0x50)(None)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Map_Find_Value;                           // 0x160(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.CheckForMissingData
struct UBP_CollectedVisualMeshData_C_CheckForMissingData_Params
{
public:
	bool                                         bValidData;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetItemDisplayName_ItemName;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetItemDisplayName_ItemName_1;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.LoadAppearance
struct UBP_CollectedVisualMeshData_C_LoadAppearance_Params
{
public:
	TArray<TSoftClassPtr<class UObject>>         CallFunc_ClassesToLoad_Classes;                    // 0x0(0x10)(ReferenceParm)
	TArray<TSoftObjectPtr<class UObject>>        CallFunc_AssetsToLoad_Assets;                      // 0x10(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckForMissingData_bValidData;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.IsLoaded
struct UBP_CollectedVisualMeshData_C_IsLoaded_Params
{
public:
	bool                                         bIsLoaded;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetAppearanceMesh
struct UBP_CollectedVisualMeshData_C_GetAppearanceMesh_Params
{
public:
	class USkeletalMesh*                         AppearanceMesh;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetEquipmentSlotTag
struct UBP_CollectedVisualMeshData_C_GetEquipmentSlotTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetEquipSlot
struct UBP_CollectedVisualMeshData_C_GetEquipSlot_Params
{
public:
	enum class E_EquipSlotType                   EquipSlot;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24A (0x24A - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeFromTable
struct UBP_CollectedVisualMeshData_C_InitializeFromTable_Params
{
public:
	struct FItemDataReference                    ItemReference;                                     // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UBP_CharacterCustomization_Component_C* Owner;                                             // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AsyncAssetLoader_C*                AsyncLoader;                                       // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ItemData;                                          // 0x90(0xD8)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData_HatType                     CallFunc_TryGetItemDataHatType_OutData;            // 0x169(0x1)(NoDestructor)
	enum class EGetResult                        CallFunc_TryGetItemDataHatType_Branches;           // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_TryGetItemData_ItemData;                  // 0x170(0xD8)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetItemData_Branches;                  // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ExecuteUbergraph_BP_CollectedVisualMeshData
struct UBP_CollectedVisualMeshData_C_ExecuteUbergraph_BP_CollectedVisualMeshData_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.DataChanged__DelegateSignature
struct UBP_CollectedVisualMeshData_C_DataChanged__DelegateSignature_Params
{
public:
	class UBP_CollectedVisualMeshData_C*         CollectedData;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


