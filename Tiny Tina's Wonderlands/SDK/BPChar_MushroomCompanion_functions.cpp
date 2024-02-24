#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPChar_MushroomCompanion.BPChar_MushroomCompanion_C
// (Actor, Pawn)

class UClass* ABPChar_MushroomCompanion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPChar_MushroomCompanion_C");

	return Clss;
}


// BPChar_MushroomCompanion_C BPChar_MushroomCompanion.Default__BPChar_MushroomCompanion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPChar_MushroomCompanion_C* ABPChar_MushroomCompanion_C::GetDefaultObj()
{
	static class ABPChar_MushroomCompanion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPChar_MushroomCompanion_C*>(ABPChar_MushroomCompanion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Passive_Ranger_11_Set_Enabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector                       (NoDestructor)

void ABPChar_MushroomCompanion_C::Passive_Ranger_11_Set_Enabled(bool Enabled, bool* Res, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Passive_Ranger_11_Set_Enabled");

	Params::ABPChar_MushroomCompanion_C_Passive_Ranger_11_Set_Enabled_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector = K2Node_MakeStruct_GbxBlackboardKeySelector;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Passive_Ranger_07_Set_Enabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector                       (NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::Passive_Ranger_07_Set_Enabled(bool Enabled, bool* Res, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Passive_Ranger_07_Set_Enabled");

	Params::ABPChar_MushroomCompanion_C_Passive_Ranger_07_Set_Enabled_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector = K2Node_MakeStruct_GbxBlackboardKeySelector;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.SetMushroomAttachmentEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGestaltPartData_Mesh*       GestaltMeshPart                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::SetMushroomAttachmentEnabled(bool Enabled, class UGestaltPartData_Mesh* GestaltMeshPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "SetMushroomAttachmentEnabled");

	Params::ABPChar_MushroomCompanion_C_SetMushroomAttachmentEnabled_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.GestaltMeshPart = GestaltMeshPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.TrackCompanion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TrackStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetManagedActorCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::TrackCompanion(bool TrackStatus, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetManagedActorCount_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "TrackCompanion");

	Params::ABPChar_MushroomCompanion_C_TrackCompanion_Params Parms{};

	Parms.TrackStatus = TrackStatus;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetManagedActorCount_ReturnValue = CallFunc_GetManagedActorCount_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OnRep_ScriptedPetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_MushroomCompanion_C::OnRep_ScriptedPetTarget(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OnRep_ScriptedPetTarget");

	Params::ABPChar_MushroomCompanion_C_OnRep_ScriptedPetTarget_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.UpdateHealingFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakGbxAttributeFloat_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_BaseValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_MushroomCompanion_C::UpdateHealingFX(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "UpdateHealingFX");

	Params::ABPChar_MushroomCompanion_C_UpdateHealingFX_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BreakGbxAttributeFloat_Value = CallFunc_BreakGbxAttributeFloat_Value;
	Parms.CallFunc_BreakGbxAttributeFloat_BaseValue = CallFunc_BreakGbxAttributeFloat_BaseValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.IncrementKillStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::IncrementKillStat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "IncrementKillStat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.SetBlackboard_Aggro
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector                       (NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::SetBlackboard_Aggro(bool Toggle, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "SetBlackboard_Aggro");

	Params::ABPChar_MushroomCompanion_C_SetBlackboard_Aggro_Params Parms{};

	Parms.Toggle = Toggle;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector = K2Node_MakeStruct_GbxBlackboardKeySelector;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.SecondWindInjuredAllies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AOakCharacter_Player*>Allies                                                           (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AOakCharacter_Player*        NewAlly                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBPFightForYourLifeComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::SecondWindInjuredAllies(TArray<class AOakCharacter_Player*>& Allies, class AOakCharacter_Player* NewAlly, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AOakCharacter_Player* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "SecondWindInjuredAllies");

	Params::ABPChar_MushroomCompanion_C_SecondWindInjuredAllies_Params Parms{};

	Parms.Allies = Allies;
	Parms.NewAlly = NewAlly;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.SetUltimateBlackboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector                       (NoDestructor)
// class AController*                 CallFunc_GetAssociatedController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::SetUltimateBlackboard(bool Value, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, class AController* CallFunc_GetAssociatedController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "SetUltimateBlackboard");

	Params::ABPChar_MushroomCompanion_C_SetUltimateBlackboard_Params Parms{};

	Parms.Value = Value;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector = K2Node_MakeStruct_GbxBlackboardKeySelector;
	Parms.CallFunc_GetAssociatedController_ReturnValue = CallFunc_GetAssociatedController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.ComparePetKillerToAllies
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AssignPetToKiller                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        NewKiller                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AOakCharacter_Player*>NewPlayerAllies                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOakPlayerAbilityAllyQuerySpecK2Node_MakeStruct_OakPlayerAbilityAllyQuerySpec                  (NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOakPlayerAbilityAllyQueryResultCallFunc_QueryAllies_ReturnValue                                 (None)

void ABPChar_MushroomCompanion_C::ComparePetKillerToAllies(class AActor* Killer, bool* AssignPetToKiller, class AOakCharacter_Player* NewKiller, const TArray<class AOakCharacter_Player*>& NewPlayerAllies, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FOakPlayerAbilityAllyQuerySpec& K2Node_MakeStruct_OakPlayerAbilityAllyQuerySpec, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FOakPlayerAbilityAllyQueryResult& CallFunc_QueryAllies_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "ComparePetKillerToAllies");

	Params::ABPChar_MushroomCompanion_C_ComparePetKillerToAllies_Params Parms{};

	Parms.Killer = Killer;
	Parms.NewKiller = NewKiller;
	Parms.NewPlayerAllies = NewPlayerAllies;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_OakPlayerAbilityAllyQuerySpec = K2Node_MakeStruct_OakPlayerAbilityAllyQuerySpec;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_QueryAllies_ReturnValue = CallFunc_QueryAllies_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AssignPetToKiller != nullptr)
		*AssignPetToKiller = Parms.AssignPetToKiller;

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.PlaySpawnActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewDirection                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRelativeDirectionData      NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::PlaySpawnActions(const struct FVector& NewDirection, const struct FRelativeDirectionData& NewLocalVar_0, TArray<struct FGbxActionRegister>& Temp_struct_Variable, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "PlaySpawnActions");

	Params::ABPChar_MushroomCompanion_C_PlaySpawnActions_Params Parms{};

	Parms.NewDirection = NewDirection;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue1 = CallFunc_K2Play_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.IsOwnerInFFYL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InFFYL                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBPFightForYourLifeComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInDownState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_MushroomCompanion_C::IsOwnerInFFYL(bool* InFFYL, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsInDownState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "IsOwnerInFFYL");

	Params::ABPChar_MushroomCompanion_C_IsOwnerInFFYL_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsInDownState_ReturnValue = CallFunc_IsInDownState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InFFYL != nullptr)
		*InFFYL = Parms.InFFYL;

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OnDialogSequenceFinished_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::OnDialogSequenceFinished_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OnDialogSequenceFinished_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
// (BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OnAggro_PlayerPets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::OnAggro_PlayerPets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OnAggro_PlayerPets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OnDeAggro_PlayerPets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AggroDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::OnDeAggro_PlayerPets(float AggroDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OnDeAggro_PlayerPets");

	Params::ABPChar_MushroomCompanion_C_OnDeAggro_PlayerPets_Params Parms{};

	Parms.AggroDuration = AggroDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet
// (BlueprintEvent)
// Parameters:
// class AController*                 UserController                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         UsedComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet");

	Params::ABPChar_MushroomCompanion_C_BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet_Params Parms{};

	Parms.UserController = UserController;
	Parms.UsedComponent = UsedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
// (BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
// (BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPChar_MushroomCompanion_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet");

	Params::ABPChar_MushroomCompanion_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Pet_DownStateStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Pet_DownStateStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Pet_DownStateStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
// (BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OnHealingFXChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::OnHealingFXChanged(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OnHealingFXChanged");

	Params::ABPChar_MushroomCompanion_C_OnHealingFXChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Necromancer_15_Buff_Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Necromancer_15_Buff_Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Necromancer_15_Buff_Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Necromancer_15_Buff_Deactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Necromancer_15_Buff_Deactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Necromancer_15_Buff_Deactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.MushroomCompanionCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForced                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPetReleaseReason       Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::MushroomCompanionCleanup(bool bForced, enum class EPetReleaseReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "MushroomCompanionCleanup");

	Params::ABPChar_MushroomCompanion_C_MushroomCompanionCleanup_Params Parms{};

	Parms.bForced = bForced;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Ranger_FFYLStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Ranger_FFYLStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Ranger_FFYLStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Ranger_FFYLStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Ranger_FFYLStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Ranger_FFYLStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Health_Recalculate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::Health_Recalculate(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Health_Recalculate");

	Params::ABPChar_MushroomCompanion_C_Health_Recalculate_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Ranger_FFYLCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABPChar_MushroomCompanion_C::Ranger_FFYLCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Ranger_FFYLCausedAnyDamage");

	Params::ABPChar_MushroomCompanion_C_Ranger_FFYLCausedAnyDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Audio_MeleeSwing_R
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Audio_MeleeSwing_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Audio_MeleeSwing_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Audio_MeleeSwing_L
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Audio_MeleeSwing_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Audio_MeleeSwing_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Audio_Bite_Attack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Audio_Bite_Attack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Audio_Bite_Attack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Audio_Head_Butt
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Audio_Head_Butt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Audio_Head_Butt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Audio_Bite_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::Audio_Bite_Multi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Audio_Bite_Multi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_3_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_MushroomCompanion
// (BlueprintEvent)
// Parameters:
// bool                               IsSuccessful                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_MushroomCompanion_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_3_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_MushroomCompanion(bool IsSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_3_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_MushroomCompanion");

	Params::ABPChar_MushroomCompanion_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_3_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_MushroomCompanion_Params Parms{};

	Parms.IsSuccessful = IsSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.SetPetUsable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_MushroomCompanion_C::SetPetUsable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "SetPetUsable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OnPlayerPing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        InstigatingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::OnPlayerPing(class AActor* TargetActor, const struct FVector& TargetLocation, class AOakPlayerController* InstigatingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OnPlayerPing");

	Params::ABPChar_MushroomCompanion_C_OnPlayerPing_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.TargetLocation = TargetLocation;
	Parms.InstigatingController = InstigatingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OverrideTargetDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::OverrideTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OverrideTargetDied");

	Params::ABPChar_MushroomCompanion_C_OverrideTargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.Player_OnLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldExperienceLevel                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewExperienceLevel                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::Player_OnLevelUp(int32 OldExperienceLevel, int32 NewExperienceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "Player_OnLevelUp");

	Params::ABPChar_MushroomCompanion_C_Player_OnLevelUp_Params Parms{};

	Parms.OldExperienceLevel = OldExperienceLevel;
	Parms.NewExperienceLevel = NewExperienceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.OnDeath_FFYLScriptedTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::OnDeath_FFYLScriptedTarget(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "OnDeath_FFYLScriptedTarget");

	Params::ABPChar_MushroomCompanion_C_OnDeath_FFYLScriptedTarget_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_MushroomCompanion.BPChar_MushroomCompanion_C.ExecuteUbergraph_BPChar_MushroomCompanion
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAbility_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Passive_Ranger_11_Set_Enabled_Res                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_ComponentBoundEvent_UserController                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_UsedComponent                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageComponent*            K2Node_ComponentBoundEvent_Damaged                               (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_ComponentBoundEvent_Details                               (ConstParm)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPlayerMaster_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_OldValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bForced                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPetReleaseReason       K2Node_CustomEvent_Reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwnerInFFYL_InFFYL                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UDamageCauserComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UDamageCauserComponent*      CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// float                              K2Node_CustomEvent_OldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// bool                               CallFunc_ComparePetKillerToAllies_AssignPetToKiller              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue1                          (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue2                          (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue3                          (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue4                          (None)
// float                              K2Node_CustomEvent_AggroDuration                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsSuccessful                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector                       (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TargetActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_TargetLocation                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        K2Node_CustomEvent_InstigatingController                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTargetableComponent*        CallFunc_GetComponentByClass_ReturnValue3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetableByAIPlayers_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamageReceiver1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHostile_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetableByActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerBalanceStateComponent*CallFunc_GetComponentByClass_ReturnValue5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExperienceLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OldExperienceLevel                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewExperienceLevel                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector1                      (NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector2                      (NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue6                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageComponent*            CallFunc_GetComponentByClass_ReturnValue7                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector3                      (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetAssociatedController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGbxAIController*            K2Node_DynamicCast_AsGbx_AIController                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetAssociatedController_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetAssociatedController_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_DynamicCast_AsGbx_AIController1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector4                      (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate19                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector5                      (NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector6                      (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate20                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate21                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate22                           (ZeroConstructor, NoDestructor)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue               (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate23                           (ZeroConstructor, NoDestructor)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue1              (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate24                           (ZeroConstructor, NoDestructor)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue2              (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FGbxAttributeDelegateBindingHandleCallFunc_BindEventToOnAttributeChanged_ReturnValue3              (None)
// TArray<struct FGbxAttributeDelegateBindingHandle>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAttributeDelegateBindingHandleCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_HasAbility_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Passive_Ranger_07_Set_Enabled_Res                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue8                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_MushroomCompanion_C::ExecuteUbergraph_BPChar_MushroomCompanion(int32 EntryPoint, bool CallFunc_HasAbility_ReturnValue, bool CallFunc_Passive_Ranger_11_Set_Enabled_Res, class AController* K2Node_ComponentBoundEvent_UserController, class UPrimitiveComponent* K2Node_ComponentBoundEvent_UsedComponent, bool K2Node_SwitchEnum_CmpSuccess, class UDamageComponent* K2Node_ComponentBoundEvent_Damaged, const struct FCausedDeathDetails& K2Node_ComponentBoundEvent_Details, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_SetPlayerMaster_ReturnValue, float K2Node_CustomEvent_OldValue1, float K2Node_CustomEvent_NewValue1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1, bool K2Node_CustomEvent_bForced, enum class EPetReleaseReason K2Node_CustomEvent_Reason, bool CallFunc_IsOwnerInFFYL_InFFYL, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue1, TArray<struct FGbxActionRegister>& Temp_struct_Variable, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, class UGbxAction* CallFunc_K2Play_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, bool CallFunc_ComparePetKillerToAllies_AssignPetToKiller, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue4, float K2Node_CustomEvent_AggroDuration, bool K2Node_ComponentBoundEvent_IsSuccessful, const struct FHitResult& Temp_struct_Variable1, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue2, class AActor* K2Node_CustomEvent_TargetActor, const struct FVector& K2Node_CustomEvent_TargetLocation, class AOakPlayerController* K2Node_CustomEvent_InstigatingController, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsTargetableByAIPlayers_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* K2Node_CustomEvent_DamageReceiver1, class AActor* K2Node_CustomEvent_DamageCauser1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue3, bool CallFunc_IsServer_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsHostile_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, class UPlayerBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue5, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetExperienceLevel_ReturnValue, int32 K2Node_CustomEvent_OldExperienceLevel, int32 K2Node_CustomEvent_NewExperienceLevel, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector1, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector2, class UGbxAbility* CallFunc_GetClassFeat_Res, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue6, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess2, class UDamageComponent* CallFunc_GetComponentByClass_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class AController* CallFunc_GetAssociatedController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AGbxAIController* K2Node_DynamicCast_AsGbx_AIController, bool K2Node_DynamicCast_bSuccess3, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AController* CallFunc_GetAssociatedController_ReturnValue1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class AController* CallFunc_GetAssociatedController_ReturnValue2, class AGbxAIController* K2Node_DynamicCast_AsGbx_AIController1, bool K2Node_DynamicCast_bSuccess4, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, bool Temp_bool_IsClosed_Variable, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector5, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate22, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate23, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate24, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue3, TArray<struct FGbxAttributeDelegateBindingHandle>& K2Node_MakeArray_Array, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, const struct FGbxAttributeDelegateBindingHandle& CallFunc_Array_Get_Item, bool CallFunc_HasAbility_ReturnValue1, bool CallFunc_Passive_Ranger_07_Set_Enabled_Res, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_MushroomCompanion_C", "ExecuteUbergraph_BPChar_MushroomCompanion");

	Params::ABPChar_MushroomCompanion_C_ExecuteUbergraph_BPChar_MushroomCompanion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAbility_ReturnValue = CallFunc_HasAbility_ReturnValue;
	Parms.CallFunc_Passive_Ranger_11_Set_Enabled_Res = CallFunc_Passive_Ranger_11_Set_Enabled_Res;
	Parms.K2Node_ComponentBoundEvent_UserController = K2Node_ComponentBoundEvent_UserController;
	Parms.K2Node_ComponentBoundEvent_UsedComponent = K2Node_ComponentBoundEvent_UsedComponent;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_Damaged = K2Node_ComponentBoundEvent_Damaged;
	Parms.K2Node_ComponentBoundEvent_Details = K2Node_ComponentBoundEvent_Details;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_SetPlayerMaster_ReturnValue = CallFunc_SetPlayerMaster_ReturnValue;
	Parms.K2Node_CustomEvent_OldValue1 = K2Node_CustomEvent_OldValue1;
	Parms.K2Node_CustomEvent_NewValue1 = K2Node_CustomEvent_NewValue1;
	Parms.CallFunc_GetBlackboard_ReturnValue1 = CallFunc_GetBlackboard_ReturnValue1;
	Parms.K2Node_CustomEvent_bForced = K2Node_CustomEvent_bForced;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_IsOwnerInFFYL_InFFYL = CallFunc_IsOwnerInFFYL_InFFYL;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_OldValue = K2Node_CustomEvent_OldValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.K2Node_CustomEvent_DamageInstigator = K2Node_CustomEvent_DamageInstigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.CallFunc_ComparePetKillerToAllies_AssignPetToKiller = CallFunc_ComparePetKillerToAllies_AssignPetToKiller;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue1 = CallFunc_PostAttachedEvent_ReturnValue1;
	Parms.CallFunc_PostAttachedEvent_ReturnValue2 = CallFunc_PostAttachedEvent_ReturnValue2;
	Parms.CallFunc_PostAttachedEvent_ReturnValue3 = CallFunc_PostAttachedEvent_ReturnValue3;
	Parms.CallFunc_PostAttachedEvent_ReturnValue4 = CallFunc_PostAttachedEvent_ReturnValue4;
	Parms.K2Node_CustomEvent_AggroDuration = K2Node_CustomEvent_AggroDuration;
	Parms.K2Node_ComponentBoundEvent_IsSuccessful = K2Node_ComponentBoundEvent_IsSuccessful;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector = K2Node_MakeStruct_GbxBlackboardKeySelector;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue2 = CallFunc_GetBlackboard_ReturnValue2;
	Parms.K2Node_CustomEvent_TargetActor = K2Node_CustomEvent_TargetActor;
	Parms.K2Node_CustomEvent_TargetLocation = K2Node_CustomEvent_TargetLocation;
	Parms.K2Node_CustomEvent_InstigatingController = K2Node_CustomEvent_InstigatingController;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue3 = CallFunc_GetComponentByClass_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsTargetableByAIPlayers_ReturnValue = CallFunc_IsTargetableByAIPlayers_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_DamageReceiver1 = K2Node_CustomEvent_DamageReceiver1;
	Parms.K2Node_CustomEvent_DamageCauser1 = K2Node_CustomEvent_DamageCauser1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetComponentByClass_ReturnValue4 = CallFunc_GetComponentByClass_ReturnValue4;
	Parms.CallFunc_GetBlackboard_ReturnValue3 = CallFunc_GetBlackboard_ReturnValue3;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue4 = CallFunc_GetBlackboard_ReturnValue4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsHostile_ReturnValue = CallFunc_IsHostile_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_IsTargetableByActor_ReturnValue = CallFunc_IsTargetableByActor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue5 = CallFunc_GetComponentByClass_ReturnValue5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetExperienceLevel_ReturnValue = CallFunc_GetExperienceLevel_ReturnValue;
	Parms.K2Node_CustomEvent_OldExperienceLevel = K2Node_CustomEvent_OldExperienceLevel;
	Parms.K2Node_CustomEvent_NewExperienceLevel = K2Node_CustomEvent_NewExperienceLevel;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector1 = K2Node_MakeStruct_GbxBlackboardKeySelector1;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue2 = CallFunc_EqualEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector2 = K2Node_MakeStruct_GbxBlackboardKeySelector2;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.CallFunc_GetComponentByClass_ReturnValue6 = CallFunc_GetComponentByClass_ReturnValue6;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetComponentByClass_ReturnValue7 = CallFunc_GetComponentByClass_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector3 = K2Node_MakeStruct_GbxBlackboardKeySelector3;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetAssociatedController_ReturnValue = CallFunc_GetAssociatedController_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_DynamicCast_AsGbx_AIController = K2Node_DynamicCast_AsGbx_AIController;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_GetAssociatedController_ReturnValue1 = CallFunc_GetAssociatedController_ReturnValue1;
	Parms.CallFunc_GetBlackboard_ReturnValue5 = CallFunc_GetBlackboard_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.CallFunc_GetAssociatedController_ReturnValue2 = CallFunc_GetAssociatedController_ReturnValue2;
	Parms.K2Node_DynamicCast_AsGbx_AIController1 = K2Node_DynamicCast_AsGbx_AIController1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector4 = K2Node_MakeStruct_GbxBlackboardKeySelector4;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.K2Node_CreateDelegate_OutputDelegate19 = K2Node_CreateDelegate_OutputDelegate19;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector5 = K2Node_MakeStruct_GbxBlackboardKeySelector5;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector6 = K2Node_MakeStruct_GbxBlackboardKeySelector6;
	Parms.K2Node_CreateDelegate_OutputDelegate20 = K2Node_CreateDelegate_OutputDelegate20;
	Parms.K2Node_CreateDelegate_OutputDelegate21 = K2Node_CreateDelegate_OutputDelegate21;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate22 = K2Node_CreateDelegate_OutputDelegate22;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue = CallFunc_BindEventToOnAttributeChanged_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate23 = K2Node_CreateDelegate_OutputDelegate23;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue1 = CallFunc_BindEventToOnAttributeChanged_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate24 = K2Node_CreateDelegate_OutputDelegate24;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue2 = CallFunc_BindEventToOnAttributeChanged_ReturnValue2;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_BindEventToOnAttributeChanged_ReturnValue3 = CallFunc_BindEventToOnAttributeChanged_ReturnValue3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasAbility_ReturnValue1 = CallFunc_HasAbility_ReturnValue1;
	Parms.CallFunc_Passive_Ranger_07_Set_Enabled_Res = CallFunc_Passive_Ranger_07_Set_Enabled_Res;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue8 = CallFunc_GetComponentByClass_ReturnValue8;

	UObject::ProcessEvent(Func, &Parms);

}

}


