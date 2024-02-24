#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C
// (Actor)

class UClass* Aba_InvestigationBoard_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_InvestigationBoard_Parent_C");

	return Clss;
}


// ba_InvestigationBoard_Parent_C ba_InvestigationBoard_Parent.Default__ba_InvestigationBoard_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_InvestigationBoard_Parent_C* Aba_InvestigationBoard_Parent_C::GetDefaultObj()
{
	static class Aba_InvestigationBoard_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_InvestigationBoard_Parent_C*>(Aba_InvestigationBoard_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_InvestigationBoard_Parent_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "GetObjectsToSave");

	Params::Aba_InvestigationBoard_Parent_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_InvestigationBoard_Parent_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "HasObjectsToSave");

	Params::Aba_InvestigationBoard_Parent_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_InvestigationBoard_Parent_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_InvestigationBoard_Parent_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.BlendToCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::BlendToCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "BlendToCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.GetDescKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Row_Name                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Parent_C::GetDescKey(class FName* Row_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "GetDescKey");

	Params::Aba_InvestigationBoard_Parent_C_GetDescKey_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Row_Name != nullptr)
		*Row_Name = Parms.Row_Name;

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.SetWormhole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WormholeEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      WormholeStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              WormHoleStatusID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Parent_C::SetWormhole(bool WormholeEnabled, const class FString& WormholeStatus, uint8 WormHoleStatusID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "SetWormhole");

	Params::Aba_InvestigationBoard_Parent_C_SetWormhole_Params Parms{};

	Parms.WormholeEnabled = WormholeEnabled;
	Parms.WormholeStatus = WormholeStatus;
	Parms.WormHoleStatusID = WormHoleStatusID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.BeginUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSpawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Spawn_IsCrucial                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Spawn_WasSpawned                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>CallFunc_GetAllUnlockedNoteActors_Return                         (ReferenceParm)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>CallFunc_GetAllUnlockedNoteActors_NewCrucialNotes                (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Parent_C::BeginUpdate(bool ShouldSpawn, int32 Temp_int_Array_Index_Variable, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Spawn_IsCrucial, bool CallFunc_Spawn_WasSpawned, int32 Temp_int_Loop_Counter_Variable, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& CallFunc_GetAllUnlockedNoteActors_Return, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& CallFunc_GetAllUnlockedNoteActors_NewCrucialNotes, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "BeginUpdate");

	Params::Aba_InvestigationBoard_Parent_C_BeginUpdate_Params Parms{};

	Parms.ShouldSpawn = ShouldSpawn;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Spawn_IsCrucial = CallFunc_Spawn_IsCrucial;
	Parms.CallFunc_Spawn_WasSpawned = CallFunc_Spawn_WasSpawned;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllUnlockedNoteActors_Return = CallFunc_GetAllUnlockedNoteActors_Return;
	Parms.CallFunc_GetAllUnlockedNoteActors_NewCrucialNotes = CallFunc_GetAllUnlockedNoteActors_NewCrucialNotes;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.FilterOutAlreadyKnownActors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                Input_already_known_notes                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>AlreadyKnownNotes                                                (Parm, OutParm)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>NewNotes                                                         (Parm, OutParm)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>LocalNewNotes                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*IteratedNote                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>LocalAlreadyKnownNotes                                           (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Parent_C::FilterOutAlreadyKnownActors(TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& Array, TArray<class FName>& Input_already_known_notes, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* AlreadyKnownNotes, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* NewNotes, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& LocalNewNotes, class Aba_NoteSpawnerComponentForInvestigationBoard_C* IteratedNote, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& LocalAlreadyKnownNotes, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "FilterOutAlreadyKnownActors");

	Params::Aba_InvestigationBoard_Parent_C_FilterOutAlreadyKnownActors_Params Parms{};

	Parms.Array = Array;
	Parms.Input_already_known_notes = Input_already_known_notes;
	Parms.LocalNewNotes = LocalNewNotes;
	Parms.IteratedNote = IteratedNote;
	Parms.LocalAlreadyKnownNotes = LocalAlreadyKnownNotes;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AlreadyKnownNotes != nullptr)
		*AlreadyKnownNotes = std::move(Parms.AlreadyKnownNotes);

	if (NewNotes != nullptr)
		*NewNotes = std::move(Parms.NewNotes);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.GetAllUnlockedNoteActors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>Return                                                           (Parm, OutParm)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>NewCrucialNotes                                                  (Parm, OutParm)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*IteratedNote                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>LocalCrucialNotes                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>Local_All_unlocked_notes                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoteExperienceHandle       CallFunc_DiscoverEvidence_ExperienceHandle                       (NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfRequirementsAreMet_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Parent_C::GetAllUnlockedNoteActors(TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* Return, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* NewCrucialNotes, class Aba_NoteSpawnerComponentForInvestigationBoard_C* IteratedNote, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& LocalCrucialNotes, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& Local_All_unlocked_notes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FNoteExperienceHandle& CallFunc_DiscoverEvidence_ExperienceHandle, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Add_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckIfRequirementsAreMet_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "GetAllUnlockedNoteActors");

	Params::Aba_InvestigationBoard_Parent_C_GetAllUnlockedNoteActors_Params Parms{};

	Parms.IteratedNote = IteratedNote;
	Parms.LocalCrucialNotes = LocalCrucialNotes;
	Parms.Local_All_unlocked_notes = Local_All_unlocked_notes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_DiscoverEvidence_ExperienceHandle = CallFunc_DiscoverEvidence_ExperienceHandle;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board = K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CheckIfRequirementsAreMet_ReturnValue = CallFunc_CheckIfRequirementsAreMet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

	if (NewCrucialNotes != nullptr)
		*NewCrucialNotes = std::move(Parms.NewCrucialNotes);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.SpawnNoteOnDefinedSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FoundSlot                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Parent_C::SpawnNoteOnDefinedSlot(class FName& Key, int32 Slot, int32 FoundSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "SpawnNoteOnDefinedSlot");

	Params::Aba_InvestigationBoard_Parent_C_SpawnNoteOnDefinedSlot_Params Parms{};

	Parms.Key = Key;
	Parms.Slot = Slot;
	Parms.FoundSlot = FoundSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.InternalIntroduceNoteFromArray
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::InternalIntroduceNoteFromArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "InternalIntroduceNoteFromArray");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.Introduced
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::Introduced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "Introduced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.Begin Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::Begin_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "Begin Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.StartBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::StartBoard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "StartBoard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.EndBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::EndBoard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "EndBoard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.ExecuteUbergraph_ba_InvestigationBoard_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Parent_C::ExecuteUbergraph_ba_InvestigationBoard_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_AddUnique_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "ExecuteUbergraph_ba_InvestigationBoard_Parent");

	Params::Aba_InvestigationBoard_Parent_C_ExecuteUbergraph_ba_InvestigationBoard_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C.BoardEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Parent_C::BoardEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Parent_C", "BoardEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


