#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_GunMage_20.Passive_GunMage_20_C
// (None)

class UClass* UPassive_GunMage_20_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_GunMage_20_C");

	return Clss;
}


// Passive_GunMage_20_C Passive_GunMage_20.Default__Passive_GunMage_20_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_GunMage_20_C* UPassive_GunMage_20_C::GetDefaultObj()
{
	static class UPassive_GunMage_20_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_GunMage_20_C*>(UPassive_GunMage_20_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_GunMage_20.Passive_GunMage_20_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_GunMage_20_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_20_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_GunMage_20.Passive_GunMage_20_C.GunMagePassive20_OnStackGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPassive_GunMage_20_C::GunMagePassive20_OnStackGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_20_C", "GunMagePassive20_OnStackGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_GunMage_20.Passive_GunMage_20_C.ExecuteUbergraph_Passive_GunMage_20
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFeat_GunMage_C*             K2Node_DynamicCast_AsFeat_Gun_Mage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// float                              CallFunc_GetMaxShield_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_GunMage_20_C::ExecuteUbergraph_Passive_GunMage_20(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFeat_GunMage_C* K2Node_DynamicCast_AsFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, float CallFunc_GetMaxShield_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_20_C", "ExecuteUbergraph_Passive_GunMage_20");

	Params::UPassive_GunMage_20_C_ExecuteUbergraph_Passive_GunMage_20_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFeat_Gun_Mage = K2Node_DynamicCast_AsFeat_Gun_Mage;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetMaxShield_ReturnValue = CallFunc_GetMaxShield_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


