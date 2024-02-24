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
// Function GA_Building_Copy.GA_Building_Copy_C.OnCopyCancelled
struct UGA_Building_Copy_C_OnCopyCancelled_Params
{
public:
	enum class EBuildingFeedback                 FeedbackId;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnDeconstructCancelled
struct UGA_Building_Copy_C_OnDeconstructCancelled_Params
{
public:
	enum class EBuildingFeedback                 FeedbackId;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnEndBuilding
struct UGA_Building_Copy_C_OnEndBuilding_Params
{
public:
	enum class EBuildingFeedback                 FeedbackId;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnMovementCancelled
struct UGA_Building_Copy_C_OnMovementCancelled_Params
{
public:
	class UObject*                               MovingStructure;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 FeedbackId;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnMovementConfirmed
struct UGA_Building_Copy_C_OnMovementConfirmed_Params
{
public:
	class UObject*                               MovingStructure;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnPlacePreviewStructure
struct UGA_Building_Copy_C_OnPlacePreviewStructure_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_23CD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              StructureReference;                                // 0x30(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         IgnoreStructureBudgets;                            // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnStartDeconstruct
struct UGA_Building_Copy_C_OnStartDeconstruct_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnStartMovement
struct UGA_Building_Copy_C_OnStartMovement_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnStartPlacing
struct UGA_Building_Copy_C_OnStartPlacing_Params
{
public:
	struct FStructureAssetReference              StructureReference;                                // 0x0(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnStructureSpawned
struct UGA_Building_Copy_C_OnStructureSpawned_Params
{
public:
	class UObject*                               SpawnedStructure;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.ServerOnly_OnSpawnStructure
struct UGA_Building_Copy_C_ServerOnly_OnSpawnStructure_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_24C9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              StructureReference;                                // 0x30(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         IgnoreStructureBudgets;                            // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.K2_OnEndAbility
struct UGA_Building_Copy_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnStartCopy
struct UGA_Building_Copy_C_OnStartCopy_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnPlacementConfirmed
struct UGA_Building_Copy_C_OnPlacementConfirmed_Params
{
public:
	bool                                         bRefire;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.OnPlacementCancelled
struct UGA_Building_Copy_C_OnPlacementCancelled_Params
{
public:
	struct FStructureAssetReference              StructureReference;                                // 0x0(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	enum class EBuildingFeedback                 FeedbackId;                                        // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x440 (0x440 - 0x0)
// Function GA_Building_Copy.GA_Building_Copy_C.ExecuteUbergraph_GA_Building_Copy
struct UGA_Building_Copy_C_ExecuteUbergraph_GA_Building_Copy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 K2Node_Event_FeedbackId_4;                         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 K2Node_Event_FeedbackId_3;                         // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 K2Node_Event_FeedbackId_2;                         // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_MovingStructure_1;                    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 K2Node_Event_FeedbackId_1;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_MovingStructure;                      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_Event_TargetData_1;                         // 0x30(0x28)(ConstParm)
	uint8                                        Pad_26DD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              K2Node_Event_StructureReference_3;                 // 0x60(0x80)(ConstParm, HasGetValueTypeHash)
	bool                                         K2Node_Event_IgnoreStructureBudgets_1;             // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_Structure_2;                          // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_Structure_1;                          // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              K2Node_Event_StructureReference_2;                 // 0x100(0x80)(ConstParm, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_SpawnedStructure;                     // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_Event_TargetData;                           // 0x188(0x28)(ConstParm)
	struct FStructureAssetReference              K2Node_Event_StructureReference_1;                 // 0x1B0(0x80)(ConstParm, HasGetValueTypeHash)
	bool                                         K2Node_Event_IgnoreStructureBudgets;               // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_271F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface;           // 0x238(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2734[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface_1;         // 0x250(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2741[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface_2;         // 0x268(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_274A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface; // 0x290(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureAssetReference_IsValid;       // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_275A[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              CallFunc_GetStructureAssetReference_OutStructureReference; // 0x2B0(0x80)(HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_275E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetActivatingController_ReturnValue;      // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2769[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetActivatingController_ReturnValue_1;    // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x350(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface_3;         // 0x358(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2786[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_Structure;                            // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput; // 0x378(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_Event_bRefire;                              // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2793[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              K2Node_Event_StructureReference;                   // 0x390(0x80)(ConstParm, HasGetValueTypeHash)
	enum class EBuildingFeedback                 K2Node_Event_FeedbackId;                           // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_279E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface_4;         // 0x418(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingEventInterface> CallFunc_RemoveBuildingEventListener_Listener_CastInput; // 0x430(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

}
}


