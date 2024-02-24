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

// 0xA0 (0xA0 - 0x0)
// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.CharacterUpdated
struct ABP_PlayerPreview_HAB_C_CharacterUpdated_Params
{
public:
	struct FOnlineProfileCharacter               Character;                                         // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.GetLightComponents
struct ABP_PlayerPreview_HAB_C_GetLightComponents_Params
{
public:
	TArray<class ULightComponent*>               SceneCaptureLights;                                // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class ULightComponent*>               CameraComponentLights;                             // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULightComponent*>               K2Node_MakeArray_Array;                            // 0x28(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UChildActorComponent*>          K2Node_MakeArray_Array_1;                          // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	class UChildActorComponent*                  CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56EB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULightComponent*>               CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x60(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class ULightComponent*>               CallFunc_GetLightComponents_SceneCaptureLights;    // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class ULightComponent*>               CallFunc_GetLightComponents_CameraComponentLights; // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class ULightComponent*>               K2Node_MakeArray_Array_2;                          // 0x90(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
};

// 0x5C (0x5C - 0x0)
// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.UpdateCaptureMode
struct ABP_PlayerPreview_HAB_C_UpdateCaptureMode_Params
{
public:
	bool                                         UseSceneCapture;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseCameraComponent;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULightComponent*>               CallFunc_GetLightComponents_SceneCaptureLights;    // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class ULightComponent*>               CallFunc_GetLightComponents_CameraComponentLights; // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	class ULightComponent*                       CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULightComponent*                       CallFunc_Array_Get_Item_1;                         // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5809[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7F9 (0x7F9 - 0x0)
// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ConstructPlayerMeshArray
struct ABP_PlayerPreview_HAB_C_ConstructPlayerMeshArray_Params
{
public:
	TArray<class USkeletalMesh*>                 MeshArray;                                         // 0x0(0x10)(Parm, OutParm)
	TArray<TSoftClassPtr<class UAnimInstance>>   MeshAnimBPs;                                       // 0x10(0x10)(Parm, OutParm)
	class USkeletalMesh*                         BodyMesh;                                          // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMale;                                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5935[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UAnimInstance>>   AnimBPs;                                           // 0x30(0x10)(Edit, BlueprintVisible)
	class USkeletalMesh*                         Body;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                 Meshes;                                            // 0x48(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECharacterBodyType                Temp_byte_Variable;                                // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_594E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5963[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_HashToName_ReturnValue;                   // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue;    // 0x74(0x18)(NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue_1;                 // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue_2;                 // 0x94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_1;  // 0x9C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue_2;  // 0xB4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_597D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterCreationDataRowHandle> K2Node_MakeArray_Array;                            // 0xD0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_Array_Get_Item;                           // 0xE4(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_598F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData; // 0x100(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths;     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x22A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_599C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x230(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FArmourData                           CallFunc_GetArmourData_ArmourData;                 // 0x428(0x300)(None)
	enum class EDataValid                        CallFunc_GetArmourData_Paths;                      // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x729(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x72A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x72B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          K2Node_Select_Default;                             // 0x730(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftClassPtr<class UAnimInstance>           K2Node_Select_Default_1;                           // 0x758(0x28)(ConstParm, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          K2Node_Select_Default_2;                           // 0x780(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftClassPtr<class UAnimInstance>           K2Node_Select_Default_3;                           // 0x7A8(0x28)(ConstParm, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x7D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x7EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.CharacterDataUpdated
struct ABP_PlayerPreview_HAB_C_CharacterDataUpdated_Params
{
public:
	struct FCharacterCosmetics                   CharacterData;                                     // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ReceiveTick
struct ABP_PlayerPreview_HAB_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ExecuteUbergraph_BP_PlayerPreview_HAB
struct ABP_PlayerPreview_HAB_C_ExecuteUbergraph_BP_PlayerPreview_HAB_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


