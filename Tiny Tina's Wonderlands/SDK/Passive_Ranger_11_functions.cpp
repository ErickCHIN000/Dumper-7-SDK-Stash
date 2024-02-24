#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Ranger_11.Passive_Ranger_11_C
// (None)

class UClass* UPassive_Ranger_11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Ranger_11_C");

	return Clss;
}


// Passive_Ranger_11_C Passive_Ranger_11.Default__Passive_Ranger_11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Ranger_11_C* UPassive_Ranger_11_C::GetDefaultObj()
{
	static class UPassive_Ranger_11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Ranger_11_C*>(UPassive_Ranger_11_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Ranger_11.Passive_Ranger_11_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_11_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_11_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_11.Passive_Ranger_11_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_11_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_11_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_11.Passive_Ranger_11_C.ExecuteUbergraph_Passive_Ranger_11
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_Ranger_C>K2Node_DynamicCast_AsIFeat_Ranger                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMushroomCompanion_Ref                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMushroomCompanion_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_MushroomCompanion_C>K2Node_DynamicCast_AsIBPChar_Mushroom_Companion                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Passive_Ranger_11_Set_Enabled_Res                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_Ranger_C>K2Node_DynamicCast_AsIFeat_Ranger1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMushroomCompanion_Ref1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMushroomCompanion_Res1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_MushroomCompanion_C>K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Passive_Ranger_11_Set_Enabled_Res1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_Ranger_11_C::ExecuteUbergraph_Passive_Ranger_11(int32 EntryPoint, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetMushroomCompanion_Ref, bool CallFunc_GetMushroomCompanion_Res, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Passive_Ranger_11_Set_Enabled_Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess2, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger1, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetMushroomCompanion_Ref1, bool CallFunc_GetMushroomCompanion_Res1, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Passive_Ranger_11_Set_Enabled_Res1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_11_C", "ExecuteUbergraph_Passive_Ranger_11");

	Params::UPassive_Ranger_11_C_ExecuteUbergraph_Passive_Ranger_11_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsIFeat_Ranger = K2Node_DynamicCast_AsIFeat_Ranger;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMushroomCompanion_Ref = CallFunc_GetMushroomCompanion_Ref;
	Parms.CallFunc_GetMushroomCompanion_Res = CallFunc_GetMushroomCompanion_Res;
	Parms.K2Node_DynamicCast_AsIBPChar_Mushroom_Companion = K2Node_DynamicCast_AsIBPChar_Mushroom_Companion;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Passive_Ranger_11_Set_Enabled_Res = CallFunc_Passive_Ranger_11_Set_Enabled_Res;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Ranger1 = K2Node_DynamicCast_AsIFeat_Ranger1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetMushroomCompanion_Ref1 = CallFunc_GetMushroomCompanion_Ref1;
	Parms.CallFunc_GetMushroomCompanion_Res1 = CallFunc_GetMushroomCompanion_Res1;
	Parms.K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1 = K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_Passive_Ranger_11_Set_Enabled_Res1 = CallFunc_Passive_Ranger_11_Set_Enabled_Res1;

	UObject::ProcessEvent(Func, &Parms);

}

}


