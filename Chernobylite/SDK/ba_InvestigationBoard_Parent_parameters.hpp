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
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.GetObjectsToSave
struct Aba_InvestigationBoard_Parent_C_GetObjectsToSave_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.HasObjectsToSave
struct Aba_InvestigationBoard_Parent_C_HasObjectsToSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.ShouldUpdateOverlapsOnLoad
struct Aba_InvestigationBoard_Parent_C_ShouldUpdateOverlapsOnLoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.GetDescKey
struct Aba_InvestigationBoard_Parent_C_GetDescKey_Params
{
public:
	class FName                                  Row_Name;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.SetWormhole
struct Aba_InvestigationBoard_Parent_C_SetWormhole_Params
{
public:
	bool                                         WormholeEnabled;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1329[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                WormholeStatus;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        WormHoleStatusID;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.BeginUpdate
struct Aba_InvestigationBoard_Parent_C_BeginUpdate_Params
{
public:
	bool                                         ShouldSpawn;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1392[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Spawn_IsCrucial;                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Spawn_WasSpawned;                         // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> CallFunc_GetAllUnlockedNoteActors_Return;          // 0x20(0x10)(ReferenceParm)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> CallFunc_GetAllUnlockedNoteActors_NewCrucialNotes; // 0x30(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.FilterOutAlreadyKnownActors
struct Aba_InvestigationBoard_Parent_C_FilterOutAlreadyKnownActors_Params
{
public:
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                          Input_already_known_notes;                         // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> AlreadyKnownNotes;                                 // 0x20(0x10)(Parm, OutParm)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> NewNotes;                                          // 0x30(0x10)(Parm, OutParm)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> LocalNewNotes;                                     // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* IteratedNote;                                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> LocalAlreadyKnownNotes;                            // 0x58(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1482[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1487[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBB (0xBB - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.GetAllUnlockedNoteActors
struct Aba_InvestigationBoard_Parent_C_GetAllUnlockedNoteActors_Params
{
public:
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> Return;                                            // 0x0(0x10)(Parm, OutParm)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> NewCrucialNotes;                                   // 0x10(0x10)(Parm, OutParm)
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* IteratedNote;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> LocalCrucialNotes;                                 // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> Local_All_unlocked_notes;                          // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1548[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNoteExperienceHandle                 CallFunc_DiscoverEvidence_ExperienceHandle;        // 0x60(0x18)(NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1554[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllChildActors_ChildActors;            // 0x88(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_155A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1562[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckIfRequirementsAreMet_ReturnValue;    // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.SpawnNoteOnDefinedSlot
struct Aba_InvestigationBoard_Parent_C_SpawnNoteOnDefinedSlot_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Slot;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FoundSlot;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.ExecuteUbergraph_ba_InvestigationBoard_Parent
struct Aba_InvestigationBoard_Parent_C_ExecuteUbergraph_ba_InvestigationBoard_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1690[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1692[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue_1;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


