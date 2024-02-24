#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RiposteWIndowIndicator.RiposteWIndowIndicator_C
// (None)

class UClass* URiposteWIndowIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RiposteWIndowIndicator_C");

	return Clss;
}


// RiposteWIndowIndicator_C RiposteWIndowIndicator.Default__RiposteWIndowIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URiposteWIndowIndicator_C* URiposteWIndowIndicator_C::GetDefaultObj()
{
	static class URiposteWIndowIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URiposteWIndowIndicator_C*>(URiposteWIndowIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RiposteWIndowIndicator.RiposteWIndowIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URiposteWIndowIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiposteWIndowIndicator_C", "Tick");

	Params::URiposteWIndowIndicator_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RiposteWIndowIndicator.RiposteWIndowIndicator_C.ShowAtEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URiposteWIndowIndicator_C::ShowAtEnemy(class ABaseCharacter_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiposteWIndowIndicator_C", "ShowAtEnemy");

	Params::URiposteWIndowIndicator_C_ShowAtEnemy_Params Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RiposteWIndowIndicator.RiposteWIndowIndicator_C.Expire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URiposteWIndowIndicator_C::Expire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiposteWIndowIndicator_C", "Expire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RiposteWIndowIndicator.RiposteWIndowIndicator_C.ExecuteUbergraph_RiposteWIndowIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_Enemy                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToPlayerScreen_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URiposteWIndowIndicator_C::ExecuteUbergraph_RiposteWIndowIndicator(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ABaseCharacter_C* K2Node_CustomEvent_Enemy, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiposteWIndowIndicator_C", "ExecuteUbergraph_RiposteWIndowIndicator");

	Params::URiposteWIndowIndicator_C_ExecuteUbergraph_RiposteWIndowIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Enemy = K2Node_CustomEvent_Enemy;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_AddToPlayerScreen_ReturnValue = CallFunc_AddToPlayerScreen_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


