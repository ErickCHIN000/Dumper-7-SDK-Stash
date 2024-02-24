#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ArmourHealth.UMG_ArmourHealth_C
// (None)

class UClass* UUMG_ArmourHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ArmourHealth_C");

	return Clss;
}


// UMG_ArmourHealth_C UMG_ArmourHealth.Default__UMG_ArmourHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ArmourHealth_C* UUMG_ArmourHealth_C::GetDefaultObj()
{
	static class UUMG_ArmourHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ArmourHealth_C*>(UUMG_ArmourHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ArmourHealth.UMG_ArmourHealth_C.SetArmourHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ArmourDurability                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ArmourHealth_C::SetArmourHealth(float ArmourDurability, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourHealth_C", "SetArmourHealth");

	Params::UUMG_ArmourHealth_C_SetArmourHealth_Params Parms{};

	Parms.ArmourDurability = ArmourDurability;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArmourHealth.UMG_ArmourHealth_C.SetArmourVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ArmourHealth          ArmourHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ArmourHealth          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default                                            (ConstParm)

void UUMG_ArmourHealth_C::SetArmourVisuals(enum class E_ArmourHealth ArmourHealth, enum class E_ArmourHealth Temp_byte_Variable, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourHealth_C", "SetArmourVisuals");

	Params::UUMG_ArmourHealth_C_SetArmourVisuals_Params Parms{};

	Parms.ArmourHealth = ArmourHealth;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArmourHealth.UMG_ArmourHealth_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ArmourHealth_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourHealth_C", "PreConstruct");

	Params::UUMG_ArmourHealth_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArmourHealth.UMG_ArmourHealth_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ArmourHealth_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourHealth_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ArmourHealth.UMG_ArmourHealth_C.ExecuteUbergraph_UMG_ArmourHealth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ArmourHealth_C::ExecuteUbergraph_UMG_ArmourHealth(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourHealth_C", "ExecuteUbergraph_UMG_ArmourHealth");

	Params::UUMG_ArmourHealth_C_ExecuteUbergraph_UMG_ArmourHealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


