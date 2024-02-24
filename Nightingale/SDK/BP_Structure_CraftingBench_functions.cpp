#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_CraftingBench.BP_Structure_CraftingBench_C
// (Actor)

class UClass* ABP_Structure_CraftingBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_CraftingBench_C");

	return Clss;
}


// BP_Structure_CraftingBench_C BP_Structure_CraftingBench.Default__BP_Structure_CraftingBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_CraftingBench_C* ABP_Structure_CraftingBench_C::GetDefaultObj()
{
	static class ABP_Structure_CraftingBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_CraftingBench_C*>(ABP_Structure_CraftingBench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.GetCurrentCraftingRecipes
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FCraftingRecipeReference>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FCraftingRecipeReference>CallFunc_GetCraftingRecipes_CurrentCraftingRecipes               (ReferenceParm)

TArray<struct FCraftingRecipeReference> ABP_Structure_CraftingBench_C::GetCurrentCraftingRecipes(TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipes_CurrentCraftingRecipes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "GetCurrentCraftingRecipes");

	Params::ABP_Structure_CraftingBench_C_GetCurrentCraftingRecipes_Params Parms{};

	Parms.CallFunc_GetCraftingRecipes_CurrentCraftingRecipes = CallFunc_GetCraftingRecipes_CurrentCraftingRecipes;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.GetRelevantCraftingData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CraftingData                                                     (Parm, OutParm, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentCraftData_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCurrentCraftData_ReturnValue                         (HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::GetRelevantCraftingData(bool* Success, struct FS_Crafting_CraftInProgress* CraftingData, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "GetRelevantCraftingData");

	Params::ABP_Structure_CraftingBench_C_GetRelevantCraftingData_Params Parms{};

	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentCraftData_Success = CallFunc_GetCurrentCraftData_Success;
	Parms.CallFunc_GetCurrentCraftData_ReturnValue = CallFunc_GetCurrentCraftData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CraftingData != nullptr)
		*CraftingData = std::move(Parms.CraftingData);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.On Possessed Pawn Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::On_Possessed_Pawn_Changed(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "On Possessed Pawn Changed");

	Params::ABP_Structure_CraftingBench_C_On_Possessed_Pawn_Changed_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.On Crafted Item Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::On_Crafted_Item_Pickup(bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "On Crafted Item Pickup");

	Params::ABP_Structure_CraftingBench_C_On_Crafted_Item_Pickup_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.On Crafted Item Complete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentCraftData_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCurrentCraftData_ReturnValue                         (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::On_Crafted_Item_Complete(bool CallFunc_IsServer_ReturnValue, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "On Crafted Item Complete");

	Params::ABP_Structure_CraftingBench_C_On_Crafted_Item_Complete_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentCraftData_Success = CallFunc_GetCurrentCraftData_Success;
	Parms.CallFunc_GetCurrentCraftData_ReturnValue = CallFunc_GetCurrentCraftData_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.LoadDataFromTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoundCraftInProgressIndex                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundCraft                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::LoadDataFromTable(int32 FoundCraftInProgressIndex, bool FoundCraft, const class FString& NewLocalVar_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "LoadDataFromTable");

	Params::ABP_Structure_CraftingBench_C_LoadDataFromTable_Params Parms{};

	Parms.FoundCraftInProgressIndex = FoundCraftInProgressIndex;
	Parms.FoundCraft = FoundCraft;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.HandleAVFXFocusScoreUpdated
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FocusScore                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NormalizedFocusScore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CurrentScopedAk                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          StructureAk                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScopedAkComponent*>  CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UScopedAkComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetStructureAkComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::HandleAVFXFocusScoreUpdated(float FocusScore, float NormalizedFocusScore, class UScopedAkComponent* CurrentScopedAk, class UScopedAkComponent* StructureAk, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UScopedAkComponent*>& CallFunc_Map_Values_Values, class UScopedAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "HandleAVFXFocusScoreUpdated");

	Params::ABP_Structure_CraftingBench_C_HandleAVFXFocusScoreUpdated_Params Parms{};

	Parms.FocusScore = FocusScore;
	Parms.NormalizedFocusScore = NormalizedFocusScore;
	Parms.CurrentScopedAk = CurrentScopedAk;
	Parms.StructureAk = StructureAk;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStructureAkComponent_ReturnValue = CallFunc_GetStructureAkComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Activate Crafting Audio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               Starting_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Ending_Audio_Event                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetStructureAkComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::Activate_Crafting_Audio(class UAkAudioEvent* Starting_Audio_Event, class UAkAudioEvent* Ending_Audio_Event, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Activate Crafting Audio");

	Params::ABP_Structure_CraftingBench_C_Activate_Crafting_Audio_Params Parms{};

	Parms.Starting_Audio_Event = Starting_Audio_Event;
	Parms.Ending_Audio_Event = Ending_Audio_Event;
	Parms.CallFunc_GetStructureAkComponent_ReturnValue = CallFunc_GetStructureAkComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Deactivate Crafting VFX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              VFX                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureCraftingNiagaraTypeCrafting_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           LNiagaraComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EStructureCraftingNiagaraTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::Deactivate_Crafting_VFX(class UNiagaraSystem* VFX, enum class EStructureCraftingNiagaraType Crafting_Event, class UNiagaraComponent* LNiagaraComponent, enum class EStructureCraftingNiagaraType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UNiagaraComponent* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Deactivate Crafting VFX");

	Params::ABP_Structure_CraftingBench_C_Deactivate_Crafting_VFX_Params Parms{};

	Parms.VFX = VFX;
	Parms.Crafting_Event = Crafting_Event;
	Parms.LNiagaraComponent = LNiagaraComponent;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Activate Crafting VFX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              VFX                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureCraftingNiagaraTypeCrafting_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           LNiagaraComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EStructureCraftingNiagaraTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::Activate_Crafting_VFX(class UNiagaraSystem* VFX, enum class EStructureCraftingNiagaraType Crafting_Event, class UNiagaraComponent* LNiagaraComponent, enum class EStructureCraftingNiagaraType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Activate Crafting VFX");

	Params::ABP_Structure_CraftingBench_C_Activate_Crafting_VFX_Params Parms{};

	Parms.VFX = VFX;
	Parms.Crafting_Event = Crafting_Event;
	Parms.LNiagaraComponent = LNiagaraComponent;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Destroy Crafting Niagara Component
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::Destroy_Crafting_Niagara_Component(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Destroy Crafting Niagara Component");

	Params::ABP_Structure_CraftingBench_C_Destroy_Crafting_Niagara_Component_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Create Crafting Niagara Components
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              VFX                                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::Create_Crafting_Niagara_Components(const struct FVector& NewLocalVar, class UNiagaraSystem* VFX, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Create Crafting Niagara Components");

	Params::ABP_Structure_CraftingBench_C_Create_Crafting_Niagara_Components_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.VFX = VFX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_2 = CallFunc_SpawnSystemAttached_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Activate Complete Crafting Components
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::Activate_Complete_Crafting_Components()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Activate Complete Crafting Components");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Activate Resume Crafting Components
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::Activate_Resume_Crafting_Components()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Activate Resume Crafting Components");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Activate Pause Crafting Components
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::Activate_Pause_Crafting_Components()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Activate Pause Crafting Components");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Activate Start Crafting Components
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::Activate_Start_Crafting_Components()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Activate Start Crafting Components");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Crafting Data Updated
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Crafting_Fabrication_StatusCrafting_Status                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Claimed_Quantity                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Current_Quantity                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Requested_Quantity                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress Player_Crafting_Data                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_GetRelevantCraftingData_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetRelevantCraftingData_CraftingData                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::Crafting_Data_Updated(enum class E_Crafting_Fabrication_Status Crafting_Status, int32 Claimed_Quantity, int32 Current_Quantity, int32 Requested_Quantity, const struct FS_Crafting_CraftInProgress& Player_Crafting_Data, bool CallFunc_GetRelevantCraftingData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetRelevantCraftingData_CraftingData, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Crafting Data Updated");

	Params::ABP_Structure_CraftingBench_C_Crafting_Data_Updated_Params Parms{};

	Parms.Crafting_Status = Crafting_Status;
	Parms.Claimed_Quantity = Claimed_Quantity;
	Parms.Current_Quantity = Current_Quantity;
	Parms.Requested_Quantity = Requested_Quantity;
	Parms.Player_Crafting_Data = Player_Crafting_Data;
	Parms.CallFunc_GetRelevantCraftingData_Success = CallFunc_GetRelevantCraftingData_Success;
	Parms.CallFunc_GetRelevantCraftingData_CraftingData = CallFunc_GetRelevantCraftingData_CraftingData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.OnCompletedState
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnCompletedState_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::OnCompletedState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_OnCompletedState_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "OnCompletedState");

	Params::ABP_Structure_CraftingBench_C_OnCompletedState_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_OnCompletedState_Success = CallFunc_OnCompletedState_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.UpdateCraftingModifiers
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvironmentalInfluenceDataCraftingModifiers*EnvironmentalInfluenceData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AddModifier                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::UpdateCraftingModifiers(class UEnvironmentalInfluenceDataCraftingModifiers* EnvironmentalInfluenceData, bool AddModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "UpdateCraftingModifiers");

	Params::ABP_Structure_CraftingBench_C_UpdateCraftingModifiers_Params Parms{};

	Parms.EnvironmentalInfluenceData = EnvironmentalInfluenceData;
	Parms.AddModifier = AddModifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.UpdateGrowthTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvironmentalInfluenceDataGrowthRate*EnvironmentalInfluenceData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AddModifier                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::UpdateGrowthTime(class UEnvironmentalInfluenceDataGrowthRate* EnvironmentalInfluenceData, bool AddModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "UpdateGrowthTime");

	Params::ABP_Structure_CraftingBench_C_UpdateGrowthTime_Params Parms{};

	Parms.EnvironmentalInfluenceData = EnvironmentalInfluenceData;
	Parms.AddModifier = AddModifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.UpdateRefinementModifier
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::UpdateRefinementModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "UpdateRefinementModifier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.UpdateCraftingDisciplines
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvironmentalInfluenceDataDisciplines*EnvironmentalInfluenceData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AddDisciplines                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::UpdateCraftingDisciplines(class UEnvironmentalInfluenceDataDisciplines* EnvironmentalInfluenceData, bool AddDisciplines)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "UpdateCraftingDisciplines");

	Params::ABP_Structure_CraftingBench_C_UpdateCraftingDisciplines_Params Parms{};

	Parms.EnvironmentalInfluenceData = EnvironmentalInfluenceData;
	Parms.AddDisciplines = AddDisciplines;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.Crafting Updated Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::Crafting_Updated_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "Crafting Updated Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.SSMReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AManagerBase*                Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::SSMReady(class AManagerBase* Manager, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "SSMReady");

	Params::ABP_Structure_CraftingBench_C_SSMReady_Params Parms{};

	Parms.Manager = Manager;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.PerformDirtyRealmReset
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::PerformDirtyRealmReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "PerformDirtyRealmReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.ExecuteUbergraph_BP_Structure_CraftingBench
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataCraftingModifiers*K2Node_Event_EnvironmentalInfluenceData_2                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AddModifier_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataGrowthRate*K2Node_Event_EnvironmentalInfluenceData_1                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AddModifier                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvironmentalInfluenceDataDisciplines*K2Node_Event_EnvironmentalInfluenceData                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AddDisciplines                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AManagerBase*                K2Node_CustomEvent_Manager                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>K2Node_DynamicCast_AsEncounter_Manager_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterDirtyResetInterface>CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class AManagerBase>    Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_CraftingBench_C::ExecuteUbergraph_BP_Structure_CraftingBench(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UEnvironmentalInfluenceDataCraftingModifiers* K2Node_Event_EnvironmentalInfluenceData_2, bool K2Node_Event_AddModifier_1, class UEnvironmentalInfluenceDataGrowthRate* K2Node_Event_EnvironmentalInfluenceData_1, bool K2Node_Event_AddModifier, bool CallFunc_HasAuthority_ReturnValue_1, class UEnvironmentalInfluenceDataDisciplines* K2Node_Event_EnvironmentalInfluenceData, bool K2Node_Event_AddDisciplines, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TSubclassOf<class IInterface> Temp_class_Variable, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput, TSubclassOf<class AManagerBase> Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "ExecuteUbergraph_BP_Structure_CraftingBench");

	Params::ABP_Structure_CraftingBench_C_ExecuteUbergraph_BP_Structure_CraftingBench_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_EnvironmentalInfluenceData_2 = K2Node_Event_EnvironmentalInfluenceData_2;
	Parms.K2Node_Event_AddModifier_1 = K2Node_Event_AddModifier_1;
	Parms.K2Node_Event_EnvironmentalInfluenceData_1 = K2Node_Event_EnvironmentalInfluenceData_1;
	Parms.K2Node_Event_AddModifier = K2Node_Event_AddModifier;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_Event_EnvironmentalInfluenceData = K2Node_Event_EnvironmentalInfluenceData;
	Parms.K2Node_Event_AddDisciplines = K2Node_Event_AddDisciplines;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Manager = K2Node_CustomEvent_Manager;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Manager_Interface = K2Node_DynamicCast_AsEncounter_Manager_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput = CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue_1 = CallFunc_GetNWXPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_CraftingBench.BP_Structure_CraftingBench_C.CraftingMenuOpenRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_CraftingBench_C::CraftingMenuOpenRequest__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_CraftingBench_C", "CraftingMenuOpenRequest__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


