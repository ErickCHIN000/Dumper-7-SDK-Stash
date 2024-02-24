#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPChar_Player.BPChar_Player_C
// (Actor, Pawn)

class UClass* ABPChar_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPChar_Player_C");

	return Clss;
}


// BPChar_Player_C BPChar_Player.Default__BPChar_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPChar_Player_C* ABPChar_Player_C::GetDefaultObj()
{
	static class ABPChar_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPChar_Player_C*>(ABPChar_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPChar_Player.BPChar_Player_C.GetPlayerCharacterEventHub
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPEventHub_PlayerCharacter_C*Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::GetPlayerCharacterEventHub(class UBPEventHub_PlayerCharacter_C** Res, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetPlayerCharacterEventHub");

	Params::ABPChar_Player_C_GetPlayerCharacterEventHub_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.SetAntiqueGreatbowAttribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::SetAntiqueGreatbowAttribute(bool Enable, bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SetAntiqueGreatbowAttribute");

	Params::ABPChar_Player_C_SetAntiqueGreatbowAttribute_Params Parms{};

	Parms.Enable = Enable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult = CallFunc_AddModifierToGbxAttribute_ModifierActionResult;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue = CallFunc_AddModifierToGbxAttribute_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.SetPlayerWandVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RightHandWand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::SetPlayerWandVisibility(bool Enable, bool RightHandWand, bool* Res, bool Temp_bool_Variable, bool Temp_bool_Variable1, class USceneComponent* K2Node_Select_Default, class USceneComponent* K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SetPlayerWandVisibility");

	Params::ABPChar_Player_C_SetPlayerWandVisibility_Params Parms{};

	Parms.Enable = Enable;
	Parms.RightHandWand = RightHandWand;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetPlayerClasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakPlayerClass         Primary                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         Secondary                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         CallFunc_GetPrimaryPlayerClass_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         CallFunc_GetSecondaryPlayerClass_Res                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetPlayerClasses(enum class EOakPlayerClass* Primary, enum class EOakPlayerClass* Secondary, enum class EOakPlayerClass CallFunc_GetPrimaryPlayerClass_Res, enum class EOakPlayerClass CallFunc_GetSecondaryPlayerClass_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetPlayerClasses");

	Params::ABPChar_Player_C_GetPlayerClasses_Params Parms{};

	Parms.CallFunc_GetPrimaryPlayerClass_Res = CallFunc_GetPrimaryPlayerClass_Res;
	Parms.CallFunc_GetSecondaryPlayerClass_Res = CallFunc_GetSecondaryPlayerClass_Res;

	UObject::ProcessEvent(Func, &Parms);

	if (Primary != nullptr)
		*Primary = Parms.Primary;

	if (Secondary != nullptr)
		*Secondary = Parms.Secondary;

}


// Function BPChar_Player.BPChar_Player_C.GetPrimaryPlayerClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakPlayerClass         Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         CallFunc_GetPrimaryPlayerClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetPrimaryPlayerClass(enum class EOakPlayerClass* Res, enum class EOakPlayerClass CallFunc_GetPrimaryPlayerClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetPrimaryPlayerClass");

	Params::ABPChar_Player_C_GetPrimaryPlayerClass_Params Parms{};

	Parms.CallFunc_GetPrimaryPlayerClass_ReturnValue = CallFunc_GetPrimaryPlayerClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetSecondaryPlayerClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakPlayerClass         Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         CallFunc_GetSecondaryPlayerClass_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetSecondaryPlayerClass(enum class EOakPlayerClass* Res, enum class EOakPlayerClass CallFunc_GetSecondaryPlayerClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetSecondaryPlayerClass");

	Params::ABPChar_Player_C_GetSecondaryPlayerClass_Params Parms{};

	Parms.CallFunc_GetSecondaryPlayerClass_ReturnValue = CallFunc_GetSecondaryPlayerClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.SpawnPlayerParticleSystemAtLocationMulticast
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  EmitterTransform                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    Res                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::SpawnPlayerParticleSystemAtLocationMulticast(class UParticleSystem* EmitterTemplate, const struct FTransform& EmitterTransform, class UParticleSystemComponent** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SpawnPlayerParticleSystemAtLocationMulticast");

	Params::ABPChar_Player_C_SpawnPlayerParticleSystemAtLocationMulticast_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.EmitterTransform = EmitterTransform;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetActionSkillWeapons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxSkeletalMeshComponent*   Action_Skill_Weapon_1st                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   Action_Skill_Weapon_3rd                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetActionSkillWeapons(class UGbxSkeletalMeshComponent** Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent** Action_Skill_Weapon_3rd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetActionSkillWeapons");

	Params::ABPChar_Player_C_GetActionSkillWeapons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Action_Skill_Weapon_1st != nullptr)
		*Action_Skill_Weapon_1st = Parms.Action_Skill_Weapon_1st;

	if (Action_Skill_Weapon_3rd != nullptr)
		*Action_Skill_Weapon_3rd = Parms.Action_Skill_Weapon_3rd;

}


// Function BPChar_Player.BPChar_Player_C.GetGameInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::GetGameInstance(bool* Res, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetGameInstance");

	Params::ABPChar_Player_C_GetGameInstance_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetTotalSummonedUnits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetManagedActorCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetManagedActorCount_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetManagedActorCount_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetManagedActorCount_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGameInstance_Res                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetTotalSummonedUnits(int32* Res, int32 CallFunc_GetManagedActorCount_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_GetManagedActorCount_ReturnValue3, bool CallFunc_GetGameInstance_Res, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetTotalSummonedUnits");

	Params::ABPChar_Player_C_GetTotalSummonedUnits_Params Parms{};

	Parms.CallFunc_GetManagedActorCount_ReturnValue = CallFunc_GetManagedActorCount_ReturnValue;
	Parms.CallFunc_GetManagedActorCount_ReturnValue1 = CallFunc_GetManagedActorCount_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetManagedActorCount_ReturnValue2 = CallFunc_GetManagedActorCount_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetManagedActorCount_ReturnValue3 = CallFunc_GetManagedActorCount_ReturnValue3;
	Parms.CallFunc_GetGameInstance_Res = CallFunc_GetGameInstance_Res;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetTotalCompanionsAndSummonedUnits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalSummonedUnits_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalCompanions_Res                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetTotalCompanionsAndSummonedUnits(int32* Res, int32 CallFunc_GetTotalSummonedUnits_Res, int32 CallFunc_GetTotalCompanions_Res, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetTotalCompanionsAndSummonedUnits");

	Params::ABPChar_Player_C_GetTotalCompanionsAndSummonedUnits_Params Parms{};

	Parms.CallFunc_GetTotalSummonedUnits_Res = CallFunc_GetTotalSummonedUnits_Res;
	Parms.CallFunc_GetTotalCompanions_Res = CallFunc_GetTotalCompanions_Res;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetTotalCompanions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_GbxAttributeIntegerToInteger_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetTotalCompanions(int32* Res, int32 CallFunc_Conv_GbxAttributeIntegerToInteger_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetTotalCompanions");

	Params::ABPChar_Player_C_GetTotalCompanions_Params Parms{};

	Parms.CallFunc_Conv_GbxAttributeIntegerToInteger_ReturnValue = CallFunc_Conv_GbxAttributeIntegerToInteger_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetClassFeat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EOakPlayerClass         Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InnerGetClassFeat_Res                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_InnerGetClassFeat_Ability                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetClassFeat(enum class EOakPlayerClass Class, class UGbxAbility** Res, bool CallFunc_InnerGetClassFeat_Res, class UGbxAbility* CallFunc_InnerGetClassFeat_Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetClassFeat");

	Params::ABPChar_Player_C_GetClassFeat_Params Parms{};

	Parms.Class = Class;
	Parms.CallFunc_InnerGetClassFeat_Res = CallFunc_InnerGetClassFeat_Res;
	Parms.CallFunc_InnerGetClassFeat_Ability = CallFunc_InnerGetClassFeat_Ability;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.HasPlayerClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EOakPlayerClass         Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InnerHasPlayerClass_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::HasPlayerClass(enum class EOakPlayerClass Class, bool* Res, bool CallFunc_InnerHasPlayerClass_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "HasPlayerClass");

	Params::ABPChar_Player_C_HasPlayerClass_Params Parms{};

	Parms.Class = Class;
	Parms.CallFunc_InnerHasPlayerClass_Res = CallFunc_InnerHasPlayerClass_Res;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnPolymorphStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::Enemy_OnPolymorphStart(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Enemy_OnPolymorphStart");

	Params::ABPChar_Player_C_Enemy_OnPolymorphStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnPolymorphStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::Enemy_OnPolymorphStop(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Enemy_OnPolymorphStop");

	Params::ABPChar_Player_C_Enemy_OnPolymorphStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.CanEnemyBeTeamSwapped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::CanEnemyBeTeamSwapped(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "CanEnemyBeTeamSwapped");

	Params::ABPChar_Player_C_CanEnemyBeTeamSwapped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.GetCompanionTargetingSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Socket                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetCompanionTargetingSocket(class FName* Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetCompanionTargetingSocket");

	Params::ABPChar_Player_C_GetCompanionTargetingSocket_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Socket != nullptr)
		*Socket = Parms.Socket;

}


// Function BPChar_Player.BPChar_Player_C.OnRep_ActionSkillWeaponMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::OnRep_ActionSkillWeaponMesh(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "OnRep_ActionSkillWeaponMesh");

	Params::ABPChar_Player_C_OnRep_ActionSkillWeaponMesh_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.PlayConnectedBamfAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Disconnecting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)

void ABPChar_Player_C::PlayConnectedBamfAudio(class AController* Player, bool Disconnecting, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UWwiseEvent* K2Node_Select_Default, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "PlayConnectedBamfAudio");

	Params::ABPChar_Player_C_PlayConnectedBamfAudio_Params Parms{};

	Parms.Player = Player;
	Parms.Disconnecting = Disconnecting;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.RemoveGreatbowAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::RemoveGreatbowAttribute(bool CallFunc_RemoveAttributeModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "RemoveGreatbowAttribute");

	Params::ABPChar_Player_C_RemoveGreatbowAttribute_Params Parms{};

	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.UpdateDifficultyBonuses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_ApplyAttributeEffect_ModifierActionResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_ApplyAttributeEffect_ReturnValue                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_ApplyAttributeEffect_ModifierActionResult1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_ApplyAttributeEffect_ReturnValue1                       (None)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::UpdateDifficultyBonuses(bool CallFunc_RemoveAttributeModifier_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue1, bool CallFunc_RemoveAttributeModifier_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "UpdateDifficultyBonuses");

	Params::ABPChar_Player_C_UpdateDifficultyBonuses_Params Parms{};

	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;
	Parms.CallFunc_ApplyAttributeEffect_ModifierActionResult = CallFunc_ApplyAttributeEffect_ModifierActionResult;
	Parms.CallFunc_ApplyAttributeEffect_ReturnValue = CallFunc_ApplyAttributeEffect_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ApplyAttributeEffect_ModifierActionResult1 = CallFunc_ApplyAttributeEffect_ModifierActionResult1;
	Parms.CallFunc_ApplyAttributeEffect_ReturnValue1 = CallFunc_ApplyAttributeEffect_ReturnValue1;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue1 = CallFunc_RemoveAttributeModifier_ReturnValue1;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.GetPets
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              OutPets                                                          (Parm, OutParm, ZeroConstructor)
// TArray<class AActor*>              CurrentPetArray                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDragonPet_Ref                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_Necromancer_C>K2Node_DynamicCast_AsIFeat_Necromancer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetDemiLich_Ref                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_Ranger_C>K2Node_DynamicCast_AsIFeat_Ranger                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMushroomCompanion_Ref                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMushroomCompanion_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetPets(TArray<class AActor*>* OutPets, const TArray<class AActor*>& CurrentPetArray, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res1, class AActor* CallFunc_GetDragonPet_Ref, TScriptInterface<class IIFeat_Necromancer_C> K2Node_DynamicCast_AsIFeat_Necromancer, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetDemiLich_Ref, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UGbxAbility* CallFunc_GetClassFeat_Res2, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetMushroomCompanion_Ref, bool CallFunc_GetMushroomCompanion_Res, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetPets");

	Params::ABPChar_Player_C_GetPets_Params Parms{};

	Parms.CurrentPetArray = CurrentPetArray;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassFeat_Res1 = CallFunc_GetClassFeat_Res1;
	Parms.CallFunc_GetDragonPet_Ref = CallFunc_GetDragonPet_Ref;
	Parms.K2Node_DynamicCast_AsIFeat_Necromancer = K2Node_DynamicCast_AsIFeat_Necromancer;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetDemiLich_Ref = CallFunc_GetDemiLich_Ref;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetClassFeat_Res2 = CallFunc_GetClassFeat_Res2;
	Parms.K2Node_DynamicCast_AsIFeat_Ranger = K2Node_DynamicCast_AsIFeat_Ranger;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetMushroomCompanion_Ref = CallFunc_GetMushroomCompanion_Ref;
	Parms.CallFunc_GetMushroomCompanion_Res = CallFunc_GetMushroomCompanion_Res;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPets != nullptr)
		*OutPets = std::move(Parms.OutPets);

}


// Function BPChar_Player.BPChar_Player_C.UpdateBaseLuck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxAttributeModifierActionExecOutputCallFunc_ApplyAttributeEffect_ModifierActionResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_ApplyAttributeEffect_ReturnValue                        (None)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::UpdateBaseLuck(enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "UpdateBaseLuck");

	Params::ABPChar_Player_C_UpdateBaseLuck_Params Parms{};

	Parms.CallFunc_ApplyAttributeEffect_ModifierActionResult = CallFunc_ApplyAttributeEffect_ModifierActionResult;
	Parms.CallFunc_ApplyAttributeEffect_ReturnValue = CallFunc_ApplyAttributeEffect_ReturnValue;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.GetSecondaryActionAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakActionAbility*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbility*           CallFunc_GetSlotAbility_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_DynamicCast_AsOak_Action_Ability                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UOakActionAbility* ABPChar_Player_C::GetSecondaryActionAbility(class UOakPlayerAbility* CallFunc_GetSlotAbility_ReturnValue, class UOakActionAbility* K2Node_DynamicCast_AsOak_Action_Ability, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetSecondaryActionAbility");

	Params::ABPChar_Player_C_GetSecondaryActionAbility_Params Parms{};

	Parms.CallFunc_GetSlotAbility_ReturnValue = CallFunc_GetSlotAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Action_Ability = K2Node_DynamicCast_AsOak_Action_Ability;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPChar_Player.BPChar_Player_C.GetPrimaryActionAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakActionAbility*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbility*           CallFunc_GetSlotAbility_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_DynamicCast_AsOak_Action_Ability                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UOakActionAbility* ABPChar_Player_C::GetPrimaryActionAbility(class UOakPlayerAbility* CallFunc_GetSlotAbility_ReturnValue, class UOakActionAbility* K2Node_DynamicCast_AsOak_Action_Ability, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetPrimaryActionAbility");

	Params::ABPChar_Player_C_GetPrimaryActionAbility_Params Parms{};

	Parms.CallFunc_GetSlotAbility_ReturnValue = CallFunc_GetSlotAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Action_Ability = K2Node_DynamicCast_AsOak_Action_Ability;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPChar_Player.BPChar_Player_C.InnerHasPlayerClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EOakPlayerClass         Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBranchPrimaryOrSlottedForClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::InnerHasPlayerClass(enum class EOakPlayerClass Class, bool* Res, bool CallFunc_IsBranchPrimaryOrSlottedForClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "InnerHasPlayerClass");

	Params::ABPChar_Player_C_InnerHasPlayerClass_Params Parms{};

	Parms.Class = Class;
	Parms.CallFunc_IsBranchPrimaryOrSlottedForClass_ReturnValue = CallFunc_IsBranchPrimaryOrSlottedForClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.InnerGetClassFeat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EOakPlayerClass         Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 Ability                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InnerHasPlayerClass_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::InnerGetClassFeat(enum class EOakPlayerClass Class, bool* Res, class UGbxAbility** Ability, class UOakPlayerAbilityTreeBranchData* CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue, bool CallFunc_InnerHasPlayerClass_Res, class UGbxAbility* CallFunc_FindAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "InnerGetClassFeat");

	Params::ABPChar_Player_C_InnerGetClassFeat_Params Parms{};

	Parms.Class = Class;
	Parms.CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue = CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue;
	Parms.CallFunc_InnerHasPlayerClass_Res = CallFunc_InnerHasPlayerClass_Res;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

	if (Ability != nullptr)
		*Ability = Parms.Ability;

}


// Function BPChar_Player.BPChar_Player_C.GetTransfusionSpawnEndLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Res                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetTransfusionSpawnEndLocation(class AActor* SourceActor, struct FVector* Res, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetTransfusionSpawnEndLocation");

	Params::ABPChar_Player_C_GetTransfusionSpawnEndLocation_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}


// Function BPChar_Player.BPChar_Player_C.GetLevelUpFXAttachComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*             Res                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetPawnAttachActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::GetLevelUpFXAttachComponent(class USceneComponent** Res, class AActor* CallFunc_GetPawnAttachActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetLevelUpFXAttachComponent");

	Params::ABPChar_Player_C_GetLevelUpFXAttachComponent_Params Parms{};

	Parms.CallFunc_GetPawnAttachActor_ReturnValue = CallFunc_GetPawnAttachActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function BPChar_Player.BPChar_Player_C.PlayLevelUpFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue1                             (None)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_GetLevelUpFXAttachComponent_Res                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::PlayLevelUpFX(const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class USceneComponent* CallFunc_GetLevelUpFXAttachComponent_Res, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "PlayLevelUpFX");

	Params::ABPChar_Player_C_PlayLevelUpFX_Params Parms{};

	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue1 = CallFunc_PostWwiseEvent_ReturnValue1;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_GetLevelUpFXAttachComponent_Res = CallFunc_GetLevelUpFXAttachComponent_Res;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.GroundSlamEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHeightDamageScalar                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 DamageScaleCurve                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_ForceSelectionToFloat_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)

void ABPChar_Player_C::GroundSlamEnd(float Distance, float MaxHeightDamageScalar, class UCurveFloat* DamageScaleCurve, class UClass* Temp_class_Variable, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FHitResult& Temp_struct_Variable, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Conv_ForceSelectionToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GroundSlamEnd");

	Params::ABPChar_Player_C_GroundSlamEnd_Params Parms{};

	Parms.Distance = Distance;
	Parms.MaxHeightDamageScalar = MaxHeightDamageScalar;
	Parms.DamageScaleCurve = DamageScaleCurve;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Conv_ForceSelectionToFloat_ReturnValue = CallFunc_Conv_ForceSelectionToFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue = CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.BackupFriendlyTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::BackupFriendlyTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "BackupFriendlyTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.GetHeadMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               HeadMesh                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GetHeadMesh");

	Params::ABPChar_Player_C_GetHeadMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HeadMesh != nullptr)
		*HeadMesh = Parms.HeadMesh;

}


// Function BPChar_Player.BPChar_Player_C.ClearTargetingTimers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::ClearTargetingTimers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ClearTargetingTimers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.PreInventoryItemPickupCheck
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      PickupActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsedByInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AInventoryItemPickup*        WorldPickupActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AOakInventoryItem*           K2Node_DynamicCast_AsOak_Inventory_Item                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePickedUp_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPChar_Player_C::PreInventoryItemPickupCheck(class AActor* PickupActor, int32 Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor, class AOakInventoryItem* K2Node_DynamicCast_AsOak_Inventory_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBePickedUp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "PreInventoryItemPickupCheck");

	Params::ABPChar_Player_C_PreInventoryItemPickupCheck_Params Parms{};

	Parms.PickupActor = PickupActor;
	Parms.Quantity = Quantity;
	Parms.UsedByInstigator = UsedByInstigator;
	Parms.WorldPickupActor = WorldPickupActor;
	Parms.K2Node_DynamicCast_AsOak_Inventory_Item = K2Node_DynamicCast_AsOak_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanBePickedUp_ReturnValue = CallFunc_CanBePickedUp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPChar_Player.BPChar_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Setup_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void ABPChar_Player_C::UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Setup_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "UserConstructionScript");

	Params::ABPChar_Player_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Setup_ReturnValue = CallFunc_Setup_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.SacrificeExpGrowth__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABPChar_Player_C::SacrificeExpGrowth__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SacrificeExpGrowth__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.SacrificeExpGrowth__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABPChar_Player_C::SacrificeExpGrowth__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SacrificeExpGrowth__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.InpActEvt_R_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABPChar_Player_C::InpActEvt_R_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "InpActEvt_R_K2Node_InputKeyEvent_1");

	Params::ABPChar_Player_C_InpActEvt_R_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_Slass_Jump
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Barbarian_Slass_Jump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_Slass_Jump");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_Rage_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Barbarian_Rage_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_Rage_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_Rage_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Barbarian_Rage_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_Rage_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_Whirlwind_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interrupt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::Audio_Player_Barbarian_Whirlwind_Stop(bool Interrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_Whirlwind_Stop");

	Params::ABPChar_Player_C_Audio_Player_Barbarian_Whirlwind_Stop_Params Parms{};

	Parms.Interrupt = Interrupt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_BloodSacrifice
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Barbarian_BloodSacrifice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_BloodSacrifice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Necro_Reaper_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Necro_Reaper_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Necro_Reaper_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Necro_Reaper_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Necro_Reaper_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Necro_Reaper_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Necro_Reaper_Invulnerable
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Necro_Reaper_Invulnerable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Necro_Reaper_Invulnerable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Necro_Sacrifice_Cast
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Necro_Sacrifice_Cast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Necro_Sacrifice_Cast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Necro_Sacrifice_Exp
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Necro_Sacrifice_Exp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Necro_Sacrifice_Exp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Ranger_CalledShot_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Ranger_CalledShot_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Ranger_CalledShot_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Ranger_CalledShot_Draw
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Ranger_CalledShot_Draw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Ranger_CalledShot_Draw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Ranger_CalledShot_Fire
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Ranger_CalledShot_Fire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Ranger_CalledShot_Fire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Ranger_CryoNado_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Ranger_CryoNado_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Ranger_CryoNado_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Rogue_LivingBlade_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Rogue_LivingBlade_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Rogue_LivingBlade_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Rogue_LivingBlade_Move
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Rogue_LivingBlade_Move()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Rogue_LivingBlade_Move");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Shared_Skill_Damage
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ActorLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Audio_Player_Shared_Skill_Damage(const struct FVector& ActorLocation, class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Shared_Skill_Damage");

	Params::ABPChar_Player_C_Audio_Player_Shared_Skill_Damage_Params Parms{};

	Parms.ActorLocation = ActorLocation;
	Parms.WwiseEvent = WwiseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Rogue_Stealth_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Rogue_Stealth_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Rogue_Stealth_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Rogue_Stealth_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Rogue_Stealth_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Rogue_Stealth_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_GunMage_Polymorph_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_GunMage_Polymorph_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_GunMage_Polymorph_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_Whirlwind_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Barbarian_Whirlwind_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_Whirlwind_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_GunMage_Polymorph_Crush
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_GunMage_Polymorph_Crush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_GunMage_Polymorph_Crush");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_FireBreath_Start
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_FireBreath_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_FireBreath_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_FireBreath_Stop
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_FireBreath_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_FireBreath_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.SetMissionDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FacePlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::SetMissionDebugText(class FText Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SetMissionDebugText");

	Params::ABPChar_Player_C_SetMissionDebugText_Params Parms{};

	Parms.Text = Text;
	Parms.TextSize = TextSize;
	Parms.Duration = Duration;
	Parms.TextColor = TextColor;
	Parms.FacePlayer = FacePlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.ow_Player_RE_Stun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Ow_Player_RE_Stun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ow_Player_RE_Stun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_HammerToss_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_HammerToss_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_HammerToss_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_HammerToss_Recall
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_HammerToss_Recall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_HammerToss_Recall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_HammerToss_Throw
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_HammerToss_Throw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_HammerToss_Throw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_HammerToss_Catch
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_HammerToss_Catch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_HammerToss_Catch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.ow_camera_reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Ow_camera_reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ow_camera_reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Ranger_AimedShot_Activate
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Ranger_AimedShot_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Ranger_AimedShot_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Ranger_AimedShot_End
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Ranger_AimedShot_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Ranger_AimedShot_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Ranger_AimedShot_Intensify
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Audio_Player_Ranger_AimedShot_Intensify(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Ranger_AimedShot_Intensify");

	Params::ABPChar_Player_C_Audio_Player_Ranger_AimedShot_Intensify_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.ow_camera_zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Ow_camera_zoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ow_camera_zoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_Smite_Exp
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Audio_Player_Knight_Smite_Exp(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_Smite_Exp");

	Params::ABPChar_Player_C_Audio_Player_Knight_Smite_Exp_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.UseBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::UseBanner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "UseBanner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_HammerSlam
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_HammerSlam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_HammerSlam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.ReturnToOverworldTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReturning                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::ReturnToOverworldTransition(bool IsReturning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ReturnToOverworldTransition");

	Params::ABPChar_Player_C_ReturnToOverworldTransition_Params Parms{};

	Parms.IsReturning = IsReturning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Knight_HammerWindup
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Knight_HammerWindup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Knight_HammerWindup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_PlayAbilitySoundOnPlayer
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLocalOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Audio_PlayAbilitySoundOnPlayer(bool IsLocalOnly, class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_PlayAbilitySoundOnPlayer");

	Params::ABPChar_Player_C_Audio_PlayAbilitySoundOnPlayer_Params Parms{};

	Parms.IsLocalOnly = IsLocalOnly;
	Parms.WwiseEvent = WwiseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.RandomEncounterTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEncountering                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::RandomEncounterTransition(bool IsEncountering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "RandomEncounterTransition");

	Params::ABPChar_Player_C_RandomEncounterTransition_Params Parms{};

	Parms.IsEncountering = IsEncountering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.OnInventoryEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InventoryActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "OnInventoryEquipped");

	Params::ABPChar_Player_C_OnInventoryEquipped_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.OnInventoryUnequipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InventoryActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "OnInventoryUnequipped");

	Params::ABPChar_Player_C_OnInventoryUnequipped_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.OnInventoryPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PickedUpActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::OnInventoryPickedUp(class AActor* PickedUpActor, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "OnInventoryPickedUp");

	Params::ABPChar_Player_C_OnInventoryPickedUp_Params Parms{};

	Parms.PickedUpActor = PickedUpActor;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.DoMelee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::DoMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "DoMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Enemy_OnThoughtLockStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Enemy_OnThoughtLockStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Enemy_OnThoughtLockStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Enemy_OnThoughtLockStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Melee_Killed
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Audio_Player_Melee_Killed(class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Melee_Killed");

	Params::ABPChar_Player_C_Audio_Player_Melee_Killed_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Melee_Ringout
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*                 RingoutAudio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCritical                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 CriticalAudio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Audio_Player_Melee_Ringout(class UWwiseEvent* RingoutAudio, bool IsCritical, class UWwiseEvent* CriticalAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Melee_Ringout");

	Params::ABPChar_Player_C_Audio_Player_Melee_Ringout_Params Parms{};

	Parms.RingoutAudio = RingoutAudio;
	Parms.IsCritical = IsCritical;
	Parms.CriticalAudio = CriticalAudio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Enemy_OnPhaseLockStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Enemy_OnPhaseLockStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.MeleeStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::MeleeStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "MeleeStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Enemy_OnPhaseLockStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Enemy_OnPhaseLockStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Player_HealthDepleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Player_HealthDepleted(class AOakCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Player_HealthDepleted");

	Params::ABPChar_Player_C_Player_HealthDepleted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.OnJumped
// (Event, Public, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::OnJumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "OnJumped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABPChar_Player_C::OnLanded(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "OnLanded");

	Params::ABPChar_Player_C_OnLanded_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_Slass_Impact
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Barbarian_Slass_Impact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_Slass_Impact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player");

	Params::ABPChar_Player_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.GroundSlam_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GroundSlam_End(float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GroundSlam_End");

	Params::ABPChar_Player_C_GroundSlam_End_Params Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_Barbarian_Slass_Swing
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_Barbarian_Slass_Swing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_Barbarian_Slass_Swing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.LevelTransition_OnDungeonStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::LevelTransition_OnDungeonStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "LevelTransition_OnDungeonStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Player_LevelUp
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Old_XP_Level                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              New_XP_Level                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Player_LevelUp(int32 Old_XP_Level, int32 New_XP_Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Player_LevelUp");

	Params::ABPChar_Player_C_Player_LevelUp_Params Parms{};

	Parms.Old_XP_Level = Old_XP_Level;
	Parms.New_XP_Level = New_XP_Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player
// (BlueprintEvent)
// Parameters:
// int32                              OldExperienceLevel                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewExperienceLevel                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player(int32 OldExperienceLevel, int32 NewExperienceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player");

	Params::ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player_Params Parms{};

	Parms.OldExperienceLevel = OldExperienceLevel;
	Parms.NewExperienceLevel = NewExperienceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Player_SpawnTransfusionProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DataBlueprint__Override_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType__Override_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Causer__Override_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Player_SpawnTransfusionProjectile");

	Params::ABPChar_Player_C_Player_SpawnTransfusionProjectile_Params Parms{};

	Parms.DataBlueprint__Override_ = DataBlueprint__Override_;
	Parms.DamageType__Override_ = DamageType__Override_;
	Parms.SourceActor = SourceActor;
	Parms.TargetActor = TargetActor;
	Parms.Damage = Damage;
	Parms.Causer__Override_ = Causer__Override_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.StartZeroG
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::StartZeroG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "StartZeroG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.EndZeroG
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::EndZeroG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "EndZeroG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.ServerStartZeroG
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::ServerStartZeroG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ServerStartZeroG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.BndEvt__OakPlayerAbilityManager_K2Node_ComponentBoundEvent_1_SimplePlayerAbilitySlotDelegateSignature__DelegateSignature_BPChar_Player
// (BlueprintEvent)
// Parameters:
// class UOakPlayerAbilitySlotData*   SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::BndEvt__OakPlayerAbilityManager_K2Node_ComponentBoundEvent_1_SimplePlayerAbilitySlotDelegateSignature__DelegateSignature_BPChar_Player(class UOakPlayerAbilitySlotData* SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "BndEvt__OakPlayerAbilityManager_K2Node_ComponentBoundEvent_1_SimplePlayerAbilitySlotDelegateSignature__DelegateSignature_BPChar_Player");

	Params::ABPChar_Player_C_BndEvt__OakPlayerAbilityManager_K2Node_ComponentBoundEvent_1_SimplePlayerAbilitySlotDelegateSignature__DelegateSignature_BPChar_Player_Params Parms{};

	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.SetActionSkillWeaponMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               SkeletalMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::SetActionSkillWeaponMesh(class USkeletalMesh* SkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SetActionSkillWeaponMesh");

	Params::ABPChar_Player_C_SetActionSkillWeaponMesh_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.SetActionSkillWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::SetActionSkillWeaponVisibility(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SetActionSkillWeaponVisibility");

	Params::ABPChar_Player_C_SetActionSkillWeaponVisibility_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Event Difficulty Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerDifficultySettingDifficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Event_Difficulty_Changed(enum class EPlayerDifficultySetting Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Event Difficulty Changed");

	Params::ABPChar_Player_C_Event_Difficulty_Changed_Params Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ReceivePossessed");

	Params::ABPChar_Player_C_ReceivePossessed_Params Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_2_LevelChangedEvent__DelegateSignature_BPChar_Player
// (BlueprintEvent)
// Parameters:
// int32                              OldExperienceLevel                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewExperienceLevel                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_2_LevelChangedEvent__DelegateSignature_BPChar_Player(int32 OldExperienceLevel, int32 NewExperienceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_2_LevelChangedEvent__DelegateSignature_BPChar_Player");

	Params::ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_2_LevelChangedEvent__DelegateSignature_BPChar_Player_Params Parms{};

	Parms.OldExperienceLevel = OldExperienceLevel;
	Parms.NewExperienceLevel = NewExperienceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.On Luck Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewLuck                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::On_Luck_Changed(float NewLuck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "On Luck Changed");

	Params::ABPChar_Player_C_On_Luck_Changed_Params Parms{};

	Parms.NewLuck = NewLuck;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.LevelUpTutorialCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::LevelUpTutorialCheck(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "LevelUpTutorialCheck");

	Params::ABPChar_Player_C_LevelUpTutorialCheck_Params Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_GroundSlam_Buildup
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_GroundSlam_Buildup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_GroundSlam_Buildup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Audio_Player_GroundSlam_Impact
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Audio_Player_GroundSlam_Impact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Audio_Player_GroundSlam_Impact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.SetActionSkillWeaponVisibility1st
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::SetActionSkillWeaponVisibility1st(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SetActionSkillWeaponVisibility1st");

	Params::ABPChar_Player_C_SetActionSkillWeaponVisibility1st_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.SetActionSkillWeaponVisibility3rd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::SetActionSkillWeaponVisibility3rd(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "SetActionSkillWeaponVisibility3rd");

	Params::ABPChar_Player_C_SetActionSkillWeaponVisibility3rd_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Multicast_SpawnPlayerParticleSystemAtLocation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Emitter_Transform                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABPChar_Player_C::Multicast_SpawnPlayerParticleSystemAtLocation(class UParticleSystem* EmitterTemplate, const struct FTransform& Emitter_Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Multicast_SpawnPlayerParticleSystemAtLocation");

	Params::ABPChar_Player_C_Multicast_SpawnPlayerParticleSystemAtLocation_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.Emitter_Transform = Emitter_Transform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Multicast_LockMovement
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Multicast_LockMovement(class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Multicast_LockMovement");

	Params::ABPChar_Player_C_Multicast_LockMovement_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.Multicast_UnlockMovement
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::Multicast_UnlockMovement(class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Multicast_UnlockMovement");

	Params::ABPChar_Player_C_Multicast_UnlockMovement_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.On Mayhem Level Unlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxUnlockedLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::On_Mayhem_Level_Unlocked(int32 MaxUnlockedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "On Mayhem Level Unlocked");

	Params::ABPChar_Player_C_On_Mayhem_Level_Unlocked_Params Parms{};

	Parms.MaxUnlockedLevel = MaxUnlockedLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.LevelTransition_OnPrisonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::LevelTransition_OnPrisonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "LevelTransition_OnPrisonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.LevelTransition_OnPrisonBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::LevelTransition_OnPrisonBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "LevelTransition_OnPrisonBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Multicast_PrisonStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Multicast_PrisonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Multicast_PrisonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Multicast_PrisonBreak
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Multicast_PrisonBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Multicast_PrisonBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.OnStartGroundSlam
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::OnStartGroundSlam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "OnStartGroundSlam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.LevelTransition_OnDungeonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::LevelTransition_OnDungeonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "LevelTransition_OnDungeonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.Muliticast_OW_Spawn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_Player_C::Muliticast_OW_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "Muliticast_OW_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_Player.BPChar_Player_C.ExecuteUbergraph_BPChar_Player
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue1                             (None)
// bool                               K2Node_Event_Interrupt                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAudioPlaying_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue2                             (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue3                             (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAudioPlaying_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue4                             (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue5                             (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class UWwiseAudioComponent*        CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue6                             (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue1                          (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue2                          (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue3                          (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue7                             (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue4                          (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue8                             (None)
// struct FVector                     K2Node_Event_ActorLocation                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 K2Node_Event_WwiseEvent2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue1                        (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue9                             (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue5                          (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue10                            (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue11                            (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue2                        (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue12                            (None)
// class FText                        K2Node_Event_Text                                                (None)
// float                              K2Node_Event_TextSize                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_TextColor                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FacePlayer                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue13                            (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue14                            (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue5                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue6                          (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue6                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue7                          (None)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue7                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue8                          (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Intensity                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue15                            (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue16                            (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_Location                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue3                        (None)
// bool                               K2Node_Event_IsReturning                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue9                          (None)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsLocalOnly                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 K2Node_Event_WwiseEvent1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue4                        (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue17                            (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsEncountering                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseListenerEnvironmentalEffect*CallFunc_CreateListenerAudioEffect_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAudioPlaying_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue10                         (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInDownState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_InventoryActor1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          K2Node_CustomEvent_SlotData1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_InventoryActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          K2Node_CustomEvent_SlotData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_PickedUpActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Quantity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakInventoryItem*           K2Node_DynamicCast_AsOak_Inventory_Item                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 K2Node_Event_WwiseEvent                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 K2Node_Event_RingoutAudio                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsCritical                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 K2Node_Event_CriticalAudio                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue18                            (None)
// class UFirstPersonComponent*       CallFunc_GetFirstPersonComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue11                         (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue12                         (None)
// class AOakCharacter*               K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue13                         (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue14                         (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageComponent*            K2Node_ComponentBoundEvent_DamageReceiver                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Distance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayers_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Old_XP_Level                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_New_XP_Level                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_OldExperienceLevel1                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewExperienceLevel1                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_DataBlueprint__Override_                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_DamageType__Override_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SourceActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_TargetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Causer__Override_                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_GetTransfusionSpawnEndLocation_Res                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilitySlotData*   K2Node_ComponentBoundEvent_SlotData                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetSlotAbilityClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// class USkeletalMesh*               K2Node_Event_SkeletalMesh                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enabled                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerDifficultySettingK2Node_CustomEvent_Difficulty                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        K2Node_DynamicCast_AsOak_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_OldExperienceLevel                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewExperienceLevel                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditorSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_NewLuck                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCategoryItemQuantity_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewLevel                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue19                            (None)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue20                            (None)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue5                        (None)
// bool                               K2Node_Event_Enable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStatValue_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_CustomEvent_EmitterTemplate                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_Emitter_Transform                             (IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Reason1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxUnlockedLevel                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue21                            (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue6                        (None)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue7                        (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryBalanceStateComponent*CallFunc_GetInventoryBalanceState_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetDamageType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue8                        (None)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::ExecuteUbergraph_BPChar_Player(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, bool K2Node_Event_Interrupt, bool CallFunc_IsAudioPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue2, bool CallFunc_IsAudioPlaying_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue3, bool CallFunc_IsAudioPlaying_ReturnValue2, bool CallFunc_IsAudioPlaying_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue5, bool CallFunc_IsLocallyControlled_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue6, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue7, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue8, const struct FVector& K2Node_Event_ActorLocation, class UWwiseEvent* K2Node_Event_WwiseEvent2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue9, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue5, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue10, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue11, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue12, class FText K2Node_Event_Text, float K2Node_Event_TextSize, float K2Node_Event_Duration, const struct FLinearColor& K2Node_Event_TextColor, bool K2Node_Event_FacePlayer, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue13, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue14, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue5, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue6, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue6, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue7, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue7, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue8, bool CallFunc_IsAudioPlaying_ReturnValue4, float K2Node_Event_Intensity, bool CallFunc_IsLocallyControlled_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue15, bool CallFunc_IsLocallyControlled_ReturnValue5, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue16, bool CallFunc_IsAudioPlaying_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2, const struct FVector& K2Node_Event_Location, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue3, bool K2Node_Event_IsReturning, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue9, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, bool K2Node_Event_IsLocalOnly, class UWwiseEvent* K2Node_Event_WwiseEvent1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue17, bool CallFunc_IsLocallyControlled_ReturnValue6, bool K2Node_Event_IsEncountering, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UWwiseListenerEnvironmentalEffect* CallFunc_CreateListenerAudioEffect_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue10, bool CallFunc_IsAudioPlaying_ReturnValue7, bool CallFunc_IsInDownState_ReturnValue, class AActor* K2Node_CustomEvent_InventoryActor1, class UInventorySlotData* K2Node_CustomEvent_SlotData1, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_InventoryActor, class UInventorySlotData* K2Node_CustomEvent_SlotData, class AActor* K2Node_CustomEvent_PickedUpActor, int32 K2Node_CustomEvent_Quantity, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1, bool K2Node_DynamicCast_bSuccess1, class AOakInventoryItem* K2Node_DynamicCast_AsOak_Inventory_Item, bool K2Node_DynamicCast_bSuccess2, class UWwiseEvent* K2Node_Event_WwiseEvent, class UWwiseEvent* K2Node_Event_RingoutAudio, bool K2Node_Event_IsCritical, class UWwiseEvent* K2Node_Event_CriticalAudio, bool CallFunc_IsValid_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue18, class UFirstPersonComponent* CallFunc_GetFirstPersonComponent_ReturnValue, class FName CallFunc_GetSocketBoneName_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue11, bool CallFunc_IsLocallyControlled_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue12, class AOakCharacter* K2Node_Event_Character, const struct FHitResult& K2Node_Event_Hit, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue13, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue14, bool CallFunc_IsAudioPlaying_ReturnValue8, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, bool CallFunc_IsValid_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue4, float K2Node_Event_Distance, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_CustomEvent_Old_XP_Level, int32 K2Node_CustomEvent_New_XP_Level, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_ComponentBoundEvent_OldExperienceLevel1, int32 K2Node_ComponentBoundEvent_NewExperienceLevel1, float CallFunc_MakeLiteralFloat_ReturnValue, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess4, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FVector& CallFunc_GetTransfusionSpawnEndLocation_Res, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class UClass* Temp_class_Variable, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, bool Temp_bool_Variable, bool Temp_bool_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputKeyEvent_Key, bool CallFunc_ActorHasTag_ReturnValue, class UOakPlayerAbilitySlotData* K2Node_ComponentBoundEvent_SlotData, class UClass* CallFunc_GetSlotAbilityClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue5, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class USkeletalMesh* K2Node_Event_SkeletalMesh, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool K2Node_Event_Enabled, enum class EPlayerDifficultySetting K2Node_CustomEvent_Difficulty, class AController* K2Node_Event_NewController, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess5, int32 K2Node_ComponentBoundEvent_OldExperienceLevel, int32 K2Node_ComponentBoundEvent_NewExperienceLevel, bool CallFunc_IsEditorSession_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float K2Node_CustomEvent_NewLuck, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_GetCategoryItemQuantity_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 K2Node_CustomEvent_NewLevel, class UGameInstance* CallFunc_GetGameInstance_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue19, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UWwiseEvent* K2Node_Select_Default, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue20, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue5, bool K2Node_Event_Enable1, bool K2Node_Event_Enable, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, int32 CallFunc_GetStatValue_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FTransform& K2Node_CustomEvent_Emitter_Transform, class FName K2Node_CustomEvent_Reason1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class FName K2Node_CustomEvent_Reason, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_Variable2, class UWwiseEvent* K2Node_Select1_Default, int32 K2Node_CustomEvent_MaxUnlockedLevel, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue21, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue6, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue1, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue8, class UClass* K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "ExecuteUbergraph_BPChar_Player");

	Params::ABPChar_Player_C_ExecuteUbergraph_BPChar_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue1 = CallFunc_IsLocallyControlled_ReturnValue1;
	Parms.CallFunc_PostWwiseEvent_ReturnValue1 = CallFunc_PostWwiseEvent_ReturnValue1;
	Parms.K2Node_Event_Interrupt = K2Node_Event_Interrupt;
	Parms.CallFunc_IsAudioPlaying_ReturnValue = CallFunc_IsAudioPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue2 = CallFunc_IsLocallyControlled_ReturnValue2;
	Parms.CallFunc_PostWwiseEvent_ReturnValue2 = CallFunc_PostWwiseEvent_ReturnValue2;
	Parms.CallFunc_IsAudioPlaying_ReturnValue1 = CallFunc_IsAudioPlaying_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_PostWwiseEvent_ReturnValue3 = CallFunc_PostWwiseEvent_ReturnValue3;
	Parms.CallFunc_IsAudioPlaying_ReturnValue2 = CallFunc_IsAudioPlaying_ReturnValue2;
	Parms.CallFunc_IsAudioPlaying_ReturnValue3 = CallFunc_IsAudioPlaying_ReturnValue3;
	Parms.CallFunc_PostWwiseEvent_ReturnValue4 = CallFunc_PostWwiseEvent_ReturnValue4;
	Parms.CallFunc_PostWwiseEvent_ReturnValue5 = CallFunc_PostWwiseEvent_ReturnValue5;
	Parms.CallFunc_IsLocallyControlled_ReturnValue3 = CallFunc_IsLocallyControlled_ReturnValue3;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue = CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue6 = CallFunc_PostWwiseEvent_ReturnValue6;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue1 = CallFunc_PostAttachedEvent_ReturnValue1;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue1 = CallFunc_GetFirstPersonMesh_ReturnValue1;
	Parms.CallFunc_PostAttachedEvent_ReturnValue2 = CallFunc_PostAttachedEvent_ReturnValue2;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue2 = CallFunc_GetFirstPersonMesh_ReturnValue2;
	Parms.CallFunc_PostAttachedEvent_ReturnValue3 = CallFunc_PostAttachedEvent_ReturnValue3;
	Parms.CallFunc_PostWwiseEvent_ReturnValue7 = CallFunc_PostWwiseEvent_ReturnValue7;
	Parms.CallFunc_PostAttachedEvent_ReturnValue4 = CallFunc_PostAttachedEvent_ReturnValue4;
	Parms.CallFunc_PostWwiseEvent_ReturnValue8 = CallFunc_PostWwiseEvent_ReturnValue8;
	Parms.K2Node_Event_ActorLocation = K2Node_Event_ActorLocation;
	Parms.K2Node_Event_WwiseEvent2 = K2Node_Event_WwiseEvent2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue1 = CallFunc_PostEventAtLocation_ReturnValue1;
	Parms.CallFunc_PostWwiseEvent_ReturnValue9 = CallFunc_PostWwiseEvent_ReturnValue9;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue3 = CallFunc_GetFirstPersonMesh_ReturnValue3;
	Parms.CallFunc_PostAttachedEvent_ReturnValue5 = CallFunc_PostAttachedEvent_ReturnValue5;
	Parms.CallFunc_PostWwiseEvent_ReturnValue10 = CallFunc_PostWwiseEvent_ReturnValue10;
	Parms.CallFunc_PostWwiseEvent_ReturnValue11 = CallFunc_PostWwiseEvent_ReturnValue11;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue4 = CallFunc_GetFirstPersonMesh_ReturnValue4;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue2 = CallFunc_PostEventAtLocation_ReturnValue2;
	Parms.CallFunc_PostWwiseEvent_ReturnValue12 = CallFunc_PostWwiseEvent_ReturnValue12;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_TextSize = K2Node_Event_TextSize;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_Event_TextColor = K2Node_Event_TextColor;
	Parms.K2Node_Event_FacePlayer = K2Node_Event_FacePlayer;
	Parms.CallFunc_PostWwiseEvent_ReturnValue13 = CallFunc_PostWwiseEvent_ReturnValue13;
	Parms.CallFunc_PostWwiseEvent_ReturnValue14 = CallFunc_PostWwiseEvent_ReturnValue14;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue5 = CallFunc_GetFirstPersonMesh_ReturnValue5;
	Parms.CallFunc_PostAttachedEvent_ReturnValue6 = CallFunc_PostAttachedEvent_ReturnValue6;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue6 = CallFunc_GetFirstPersonMesh_ReturnValue6;
	Parms.CallFunc_PostAttachedEvent_ReturnValue7 = CallFunc_PostAttachedEvent_ReturnValue7;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue7 = CallFunc_GetFirstPersonMesh_ReturnValue7;
	Parms.CallFunc_PostAttachedEvent_ReturnValue8 = CallFunc_PostAttachedEvent_ReturnValue8;
	Parms.CallFunc_IsAudioPlaying_ReturnValue4 = CallFunc_IsAudioPlaying_ReturnValue4;
	Parms.K2Node_Event_Intensity = K2Node_Event_Intensity;
	Parms.CallFunc_IsLocallyControlled_ReturnValue4 = CallFunc_IsLocallyControlled_ReturnValue4;
	Parms.CallFunc_PostWwiseEvent_ReturnValue15 = CallFunc_PostWwiseEvent_ReturnValue15;
	Parms.CallFunc_IsLocallyControlled_ReturnValue5 = CallFunc_IsLocallyControlled_ReturnValue5;
	Parms.CallFunc_PostWwiseEvent_ReturnValue16 = CallFunc_PostWwiseEvent_ReturnValue16;
	Parms.CallFunc_IsAudioPlaying_ReturnValue5 = CallFunc_IsAudioPlaying_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.CallFunc_PostEventAtLocation_ReturnValue3 = CallFunc_PostEventAtLocation_ReturnValue3;
	Parms.K2Node_Event_IsReturning = K2Node_Event_IsReturning;
	Parms.CallFunc_PostAttachedEvent_ReturnValue9 = CallFunc_PostAttachedEvent_ReturnValue9;
	Parms.CallFunc_GetSocketLocation_ReturnValue1 = CallFunc_GetSocketLocation_ReturnValue1;
	Parms.K2Node_Event_IsLocalOnly = K2Node_Event_IsLocalOnly;
	Parms.K2Node_Event_WwiseEvent1 = K2Node_Event_WwiseEvent1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue4 = CallFunc_PostEventAtLocation_ReturnValue4;
	Parms.CallFunc_PostWwiseEvent_ReturnValue17 = CallFunc_PostWwiseEvent_ReturnValue17;
	Parms.CallFunc_IsLocallyControlled_ReturnValue6 = CallFunc_IsLocallyControlled_ReturnValue6;
	Parms.K2Node_Event_IsEncountering = K2Node_Event_IsEncountering;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_CreateListenerAudioEffect_ReturnValue = CallFunc_CreateListenerAudioEffect_ReturnValue;
	Parms.CallFunc_IsAudioPlaying_ReturnValue6 = CallFunc_IsAudioPlaying_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_PostAttachedEvent_ReturnValue10 = CallFunc_PostAttachedEvent_ReturnValue10;
	Parms.CallFunc_IsAudioPlaying_ReturnValue7 = CallFunc_IsAudioPlaying_ReturnValue7;
	Parms.CallFunc_IsInDownState_ReturnValue = CallFunc_IsInDownState_ReturnValue;
	Parms.K2Node_CustomEvent_InventoryActor1 = K2Node_CustomEvent_InventoryActor1;
	Parms.K2Node_CustomEvent_SlotData1 = K2Node_CustomEvent_SlotData1;
	Parms.K2Node_DynamicCast_AsOak_Inventory_Equippable_Item = K2Node_DynamicCast_AsOak_Inventory_Equippable_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_InventoryActor = K2Node_CustomEvent_InventoryActor;
	Parms.K2Node_CustomEvent_SlotData = K2Node_CustomEvent_SlotData;
	Parms.K2Node_CustomEvent_PickedUpActor = K2Node_CustomEvent_PickedUpActor;
	Parms.K2Node_CustomEvent_Quantity = K2Node_CustomEvent_Quantity;
	Parms.K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1 = K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsOak_Inventory_Item = K2Node_DynamicCast_AsOak_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_Event_WwiseEvent = K2Node_Event_WwiseEvent;
	Parms.K2Node_Event_RingoutAudio = K2Node_Event_RingoutAudio;
	Parms.K2Node_Event_IsCritical = K2Node_Event_IsCritical;
	Parms.K2Node_Event_CriticalAudio = K2Node_Event_CriticalAudio;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_PostWwiseEvent_ReturnValue18 = CallFunc_PostWwiseEvent_ReturnValue18;
	Parms.CallFunc_GetFirstPersonComponent_ReturnValue = CallFunc_GetFirstPersonComponent_ReturnValue;
	Parms.CallFunc_GetSocketBoneName_ReturnValue = CallFunc_GetSocketBoneName_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue11 = CallFunc_PostAttachedEvent_ReturnValue11;
	Parms.CallFunc_IsLocallyControlled_ReturnValue7 = CallFunc_IsLocallyControlled_ReturnValue7;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_PostAttachedEvent_ReturnValue12 = CallFunc_PostAttachedEvent_ReturnValue12;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_PostAttachedEvent_ReturnValue13 = CallFunc_PostAttachedEvent_ReturnValue13;
	Parms.CallFunc_PostAttachedEvent_ReturnValue14 = CallFunc_PostAttachedEvent_ReturnValue14;
	Parms.CallFunc_IsAudioPlaying_ReturnValue8 = CallFunc_IsAudioPlaying_ReturnValue8;
	Parms.K2Node_ComponentBoundEvent_DamageReceiver = K2Node_ComponentBoundEvent_DamageReceiver;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_Event_Distance = K2Node_Event_Distance;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetNumPlayers_ReturnValue = CallFunc_GetNumPlayers_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Old_XP_Level = K2Node_CustomEvent_Old_XP_Level;
	Parms.K2Node_CustomEvent_New_XP_Level = K2Node_CustomEvent_New_XP_Level;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OldExperienceLevel1 = K2Node_ComponentBoundEvent_OldExperienceLevel1;
	Parms.K2Node_ComponentBoundEvent_NewExperienceLevel1 = K2Node_ComponentBoundEvent_NewExperienceLevel1;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_Event_DataBlueprint__Override_ = K2Node_Event_DataBlueprint__Override_;
	Parms.K2Node_Event_DamageType__Override_ = K2Node_Event_DamageType__Override_;
	Parms.K2Node_Event_SourceActor = K2Node_Event_SourceActor;
	Parms.K2Node_Event_TargetActor = K2Node_Event_TargetActor;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Causer__Override_ = K2Node_Event_Causer__Override_;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_GetTransfusionSpawnEndLocation_Res = CallFunc_GetTransfusionSpawnEndLocation_Res;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SlotData = K2Node_ComponentBoundEvent_SlotData;
	Parms.CallFunc_GetSlotAbilityClass_ReturnValue = CallFunc_GetSlotAbilityClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.K2Node_Event_SkeletalMesh = K2Node_Event_SkeletalMesh;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.K2Node_Event_Enabled = K2Node_Event_Enabled;
	Parms.K2Node_CustomEvent_Difficulty = K2Node_CustomEvent_Difficulty;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.K2Node_DynamicCast_AsOak_Player_Controller = K2Node_DynamicCast_AsOak_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_ComponentBoundEvent_OldExperienceLevel = K2Node_ComponentBoundEvent_OldExperienceLevel;
	Parms.K2Node_ComponentBoundEvent_NewExperienceLevel = K2Node_ComponentBoundEvent_NewExperienceLevel;
	Parms.CallFunc_IsEditorSession_ReturnValue = CallFunc_IsEditorSession_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_NewLuck = K2Node_CustomEvent_NewLuck;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCategoryItemQuantity_ReturnValue = CallFunc_GetCategoryItemQuantity_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CustomEvent_NewLevel = K2Node_CustomEvent_NewLevel;
	Parms.CallFunc_GetGameInstance_ReturnValue1 = CallFunc_GetGameInstance_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_PostWwiseEvent_ReturnValue19 = CallFunc_PostWwiseEvent_ReturnValue19;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PostWwiseEvent_ReturnValue20 = CallFunc_PostWwiseEvent_ReturnValue20;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue5 = CallFunc_PostEventAtLocation_ReturnValue5;
	Parms.K2Node_Event_Enable1 = K2Node_Event_Enable1;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_GetStatValue_ReturnValue = CallFunc_GetStatValue_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.K2Node_CustomEvent_EmitterTemplate = K2Node_CustomEvent_EmitterTemplate;
	Parms.K2Node_CustomEvent_Emitter_Transform = K2Node_CustomEvent_Emitter_Transform;
	Parms.K2Node_CustomEvent_Reason1 = K2Node_CustomEvent_Reason1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CustomEvent_MaxUnlockedLevel = K2Node_CustomEvent_MaxUnlockedLevel;
	Parms.CallFunc_PostWwiseEvent_ReturnValue21 = CallFunc_PostWwiseEvent_ReturnValue21;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue6 = CallFunc_PostEventAtLocation_ReturnValue6;
	Parms.CallFunc_PostEventAtLocation_ReturnValue7 = CallFunc_PostEventAtLocation_ReturnValue7;
	Parms.CallFunc_GetGameInstance_ReturnValue2 = CallFunc_GetGameInstance_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_GetGameInstance_ReturnValue3 = CallFunc_GetGameInstance_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue4 = CallFunc_EqualEqual_IntInt_ReturnValue4;
	Parms.CallFunc_GetGameInstance_ReturnValue4 = CallFunc_GetGameInstance_ReturnValue4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue5 = CallFunc_EqualEqual_IntInt_ReturnValue5;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue1 = CallFunc_GetEquippedInventoryForSlot_ReturnValue1;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_GetInventoryBalanceState_ReturnValue = CallFunc_GetInventoryBalanceState_ReturnValue;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue8 = CallFunc_PostEventAtLocation_ReturnValue8;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_Player.BPChar_Player_C.GroundSlam__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_Player_C::GroundSlam__DelegateSignature(float Distance, float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_Player_C", "GroundSlam__DelegateSignature");

	Params::ABPChar_Player_C_GroundSlam__DelegateSignature_Params Parms{};

	Parms.Distance = Distance;
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}

}


