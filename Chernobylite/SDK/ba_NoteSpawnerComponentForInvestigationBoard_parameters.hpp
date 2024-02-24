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

// 0x10 (0x10 - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.GetObjectsToSave
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_GetObjectsToSave_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.HasObjectsToSave
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_HasObjectsToSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.ShouldUpdateOverlapsOnLoad
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_ShouldUpdateOverlapsOnLoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x260 (0x260 - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.SetNote
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_SetNote_Params
{
public:
	class FName                                  NewNote;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetAllChildActors_ChildActors;            // 0x10(0x10)(ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_col_CollectableNote_01_C*          K2Node_DynamicCast_AsBa_Col_Collectable_Note_01;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E70[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_StoryNoteInfoStructure            CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0x208)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x250(0x10)(NoDestructor)
};

// 0x35 (0x35 - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.CheckIfRequirementsAreMet
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_CheckIfRequirementsAreMet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EB3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetNamesFromRowHandles_OutputNames;       // 0x8(0x10)(ReferenceParm)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_ArrayIntersectionFName_ReturnValue;       // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x258 (0x258 - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Spawn
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_Spawn_Params
{
public:
	bool                                         IsCrucial;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WasSpawned;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F29[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_StoryNoteInfoStructure            CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x208)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F2F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetNamesFromRowHandles_OutputNames;       // 0x218(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F38[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_ArrayIntersectionFName_ReturnValue;       // 0x240(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x256(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x257(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x26A (0x26A - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.UserConstructionScript
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_UserConstructionScript_Params
{
public:
	struct FSt_StoryNoteInfoStructure            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0(0x208)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FC2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh;                  // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FD9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance;            // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FEB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh_1;                // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_1;              // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30C (0x30C - 0x0)
// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.ExecuteUbergraph_ba_NoteSpawnerComponentForInvestigationBoard
struct Aba_NoteSpawnerComponentForInvestigationBoard_C_ExecuteUbergraph_ba_NoteSpawnerComponentForInvestigationBoard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Spawn_IsCrucial;                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Spawn_WasSpawned;                         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_112A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FloatingNoteDescription_C*        CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_StoryNoteInfoStructure            CallFunc_GetDataTableRowFromName_OutRow;           // 0x20(0x208)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1135[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_DynamicCast_AsSound_Base;                   // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1140[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundWave*                            K2Node_DynamicCast_AsSound_Wave;                   // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1145[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubtitleCueBP>                CallFunc_GetSubtitlesFromSoundWave_OutSubtitleCues; // 0x260(0x10)(ReferenceParm)
	struct FSubtitleCueBP                        CallFunc_Array_Get_Item;                           // 0x270(0x20)(None)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1157[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x2A0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x2D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x2DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x2E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1167[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Play_Sound_At_Location_With_Subtitles_SubtitleRef; // 0x2F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_Play_Sound_At_Location_With_Subtitles_SoundRef; // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Play_Sound_At_Location_With_Subtitles_Duration; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


