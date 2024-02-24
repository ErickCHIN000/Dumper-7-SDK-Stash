#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_DmgBlocked_ModifyPlayerFloat.IEft_DmgBlocked_ModifyPlayerFloat_C
// (None)

class UClass* UIEft_DmgBlocked_ModifyPlayerFloat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_DmgBlocked_ModifyPlayerFloat_C");

	return Clss;
}


// IEft_DmgBlocked_ModifyPlayerFloat_C IEft_DmgBlocked_ModifyPlayerFloat.Default__IEft_DmgBlocked_ModifyPlayerFloat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_DmgBlocked_ModifyPlayerFloat_C* UIEft_DmgBlocked_ModifyPlayerFloat_C::GetDefaultObj()
{
	static class UIEft_DmgBlocked_ModifyPlayerFloat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_DmgBlocked_ModifyPlayerFloat_C*>(UIEft_DmgBlocked_ModifyPlayerFloat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_DmgBlocked_ModifyPlayerFloat.IEft_DmgBlocked_ModifyPlayerFloat_C.HandleOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_DmgBlocked_ModifyPlayerFloat_C::HandleOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_DmgBlocked_ModifyPlayerFloat_C", "HandleOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_DmgBlocked_ModifyPlayerFloat.IEft_DmgBlocked_ModifyPlayerFloat_C.OnDamageBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_DmgBlocked_ModifyPlayerFloat_C::OnDamageBlocked(class AActor* SourceActor, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_DmgBlocked_ModifyPlayerFloat_C", "OnDamageBlocked");

	Params::UIEft_DmgBlocked_ModifyPlayerFloat_C_OnDamageBlocked_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_DmgBlocked_ModifyPlayerFloat.IEft_DmgBlocked_ModifyPlayerFloat_C.ExecuteUbergraph_IEft_DmgBlocked_ModifyPlayerFloat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFunctionBoundToDelegate_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_SourceActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_DmgBlocked_ModifyPlayerFloat_C::ExecuteUbergraph_IEft_DmgBlocked_ModifyPlayerFloat(int32 EntryPoint, bool CallFunc_IsFunctionBoundToDelegate_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UObject* K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_AddStatusIcon_IconID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_SourceActor, float K2Node_Event_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_DmgBlocked_ModifyPlayerFloat_C", "ExecuteUbergraph_IEft_DmgBlocked_ModifyPlayerFloat");

	Params::UIEft_DmgBlocked_ModifyPlayerFloat_C_ExecuteUbergraph_IEft_DmgBlocked_ModifyPlayerFloat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsFunctionBoundToDelegate_ReturnValue = CallFunc_IsFunctionBoundToDelegate_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_SourceActor = K2Node_Event_SourceActor;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;

	UObject::ProcessEvent(Func, &Parms);

}

}


