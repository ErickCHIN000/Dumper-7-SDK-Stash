#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Spell_Eruption_Mod1.DamageData_Spell_Eruption_Mod1_C
// (None)

class UClass* UDamageData_Spell_Eruption_Mod1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Spell_Eruption_Mod1_C");

	return Clss;
}


// DamageData_Spell_Eruption_Mod1_C DamageData_Spell_Eruption_Mod1.Default__DamageData_Spell_Eruption_Mod1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Spell_Eruption_Mod1_C* UDamageData_Spell_Eruption_Mod1_C::GetDefaultObj()
{
	static class UDamageData_Spell_Eruption_Mod1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Spell_Eruption_Mod1_C*>(UDamageData_Spell_Eruption_Mod1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageData_Spell_Eruption_Mod1.DamageData_Spell_Eruption_Mod1_C.OnHitEnemy
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageDataEventDetails     Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamageData_Spell_Eruption_Mod1_C::OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageData_Spell_Eruption_Mod1_C", "OnHitEnemy");

	Params::UDamageData_Spell_Eruption_Mod1_C_OnHitEnemy_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.DamageTarget = DamageTarget;
	Parms.Details = Details;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


