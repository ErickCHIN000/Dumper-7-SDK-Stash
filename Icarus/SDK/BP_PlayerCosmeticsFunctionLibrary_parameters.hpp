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

// 0x28 (0x28 - 0x0)
// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.ClearCosmeticMaterialOverride
struct UBP_PlayerCosmeticsFunctionLibrary_C_ClearCosmeticMaterialOverride_Params
{
public:
	class UPrimitiveComponent*                   InPrimitive;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.MakeCharacterCreationDataArray
struct UBP_PlayerCosmeticsFunctionLibrary_C_MakeCharacterCreationDataArray_Params
{
public:
	struct FCharacterCosmetics                   CharacterCosmetics;                                // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_2A8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharacterCreationDataRowHandle> OutData;                                           // 0x40(0x10)(Parm, OutParm)
	TArray<struct FCharacterCreationDataRowHandle> Out;                                               // 0x50(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Get_Item;                           // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue;    // 0x8C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AB6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.GetMasterMaterial
struct UBP_PlayerCosmeticsFunctionLibrary_C_GetMasterMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             Parent;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             K2Node_DynamicCast_AsMaterial;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             CallFunc_GetMasterMaterial_Parent;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE61 (0xE61 - 0x0)
// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.ApplyCosmeticsToPrimitive
struct UBP_PlayerCosmeticsFunctionLibrary_C_ApplyCosmeticsToPrimitive_Params
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCosmetics                   CosmeticData;                                      // 0x8(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_2FA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MaterialPathName;                                  // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterial>              CharEyeSoftRef;                                    // 0x58(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterial>              CharDLSCapSoftRef;                                 // 0x80(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterial>              CharSkinHandsSoftRef;                              // 0xA8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterial>              CharSkinSoftRef;                                   // 0xD0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FCharacterCreationDataRowHandle> CosmeticsRowHandles;                               // 0xF8(0x10)(Edit, BlueprintVisible)
	class UMaterialInterface*                    DefaultSlotMaterial;                               // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    ParentMaterial;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material;                                          // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicInstance;                                   // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3011[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_wildcard_Variable;                            // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3034[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3067[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_SoftObjectReferenceToString_ReturnValue; // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_1; // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_2; // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_3; // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_Array_Get_Item;                           // 0x1D0(0x18)(NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue;                   // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData; // 0x1F0(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths;     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue;    // 0x31C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3109[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_1; // 0x338(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths_1;   // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_311C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UMaterialInterface>> CallFunc_Map_Keys_Keys;                            // 0x468(0x10)(ReferenceParm)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_312A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3135[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterCreationDataRowHandle> CallFunc_MakeCharacterCreationDataArray_OutData;   // 0x490(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3144[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     CallFunc_Array_Get_Item_1;                         // 0x4A8(0x28)(HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue_1;                 // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>     CallFunc_Map_Find_Value;                           // 0x4D8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_314E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_1;  // 0x504(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3167[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_2; // 0x528(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths_2;   // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3185[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface;           // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3198[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                CallFunc_Array_Get_Item_2;                         // 0x670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface_1;         // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x684(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x694(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x695(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x6A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStaticMaterial>               CallFunc_GetStaticMaterials_ReturnValue;           // 0x6B8(0x10)(ConstParm, ReferenceParm)
	struct FStaticMaterial                       CallFunc_Array_Get_Item_3;                         // 0x6C8(0x30)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x6F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x6FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x700(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_320F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSkeletalMaterial>             CallFunc_GetMaterials_ReturnValue;                 // 0x710(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Temp_wildcard_Variable_1;                          // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3255[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x73C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3264[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x740(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x744(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3278[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x748(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue_2;                 // 0x74C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_2;  // 0x754(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3287[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_3; // 0x770(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths_3;   // 0x898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x899(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x89A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_2;         // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x8A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x8B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x8BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkeletalMaterial                     CallFunc_Array_Get_Item_4;                         // 0x8C0(0x28)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             CallFunc_GetMasterMaterial_Parent;                 // 0x8F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPathName_ReturnValue;                  // 0x8F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue_3;                 // 0x910(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue_4;                 // 0x918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_3;  // 0x920(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_4;  // 0x938(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_4; // 0x950(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths_4;   // 0xA78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_5; // 0xA80(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths_5;   // 0xBA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0xBA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xBAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_HashToName_ReturnValue_5;                 // 0xBAC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue_6;                 // 0xBB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_5;  // 0xBBC(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_6;  // 0xBD4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3317[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_6; // 0xBF0(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths_6;   // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3326[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_7; // 0xD20(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths_7;   // 0xE48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0xE49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0xE4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3334[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_3;         // 0xE50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0xE58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xE60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


