#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Whisper.wid_Whisper_C
// (None)

class UClass* UWid_Whisper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Whisper_C");

	return Clss;
}


// wid_Whisper_C wid_Whisper.Default__wid_Whisper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Whisper_C* UWid_Whisper_C::GetDefaultObj()
{
	static class UWid_Whisper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Whisper_C*>(UWid_Whisper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Whisper.wid_Whisper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Whisper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Whisper.wid_Whisper_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Whisper_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "Tick");

	Params::UWid_Whisper_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Whisper.wid_Whisper_C.StartDrainingAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Whisper_C::StartDrainingAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "StartDrainingAlpha");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Whisper.wid_Whisper_C.RandomizePositionBg0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Whisper_C::RandomizePositionBg0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "RandomizePositionBg0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Whisper.wid_Whisper_C.RandomizePositionBg1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Whisper_C::RandomizePositionBg1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "RandomizePositionBg1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Whisper.wid_Whisper_C.RandomizePositionBg3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Whisper_C::RandomizePositionBg3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "RandomizePositionBg3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Whisper.wid_Whisper_C.RandomizePositionBg2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Whisper_C::RandomizePositionBg2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "RandomizePositionBg2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Whisper.wid_Whisper_C.ExecuteUbergraph_wid_Whisper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Whisper_C::ExecuteUbergraph_wid_Whisper(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "ExecuteUbergraph_wid_Whisper");

	Params::UWid_Whisper_C_ExecuteUbergraph_wid_Whisper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Whisper.wid_Whisper_C.DestroyMe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Whisper_C*              Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Whisper_C::DestroyMe__DelegateSignature(class UWid_Whisper_C* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Whisper_C", "DestroyMe__DelegateSignature");

	Params::UWid_Whisper_C_DestroyMe__DelegateSignature_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}

}


