#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatBarSquare.StatBarSquare_C
// (None)

class UClass* UStatBarSquare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatBarSquare_C");

	return Clss;
}


// StatBarSquare_C StatBarSquare.Default__StatBarSquare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatBarSquare_C* UStatBarSquare_C::GetDefaultObj()
{
	static class UStatBarSquare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatBarSquare_C*>(UStatBarSquare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatBarSquare.StatBarSquare_C.PlayAnimIfFilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatBarSquare_C::PlayAnimIfFilled(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatBarSquare_C", "PlayAnimIfFilled");

	Params::UStatBarSquare_C_PlayAnimIfFilled_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatBarSquare.StatBarSquare_C.SetFilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFilled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatBarSquare_C::SetFilled(bool bFilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatBarSquare_C", "SetFilled");

	Params::UStatBarSquare_C_SetFilled_Params Parms{};

	Parms.bFilled = bFilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatBarSquare.StatBarSquare_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatBarSquare_C::SetIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatBarSquare_C", "SetIndex");

	Params::UStatBarSquare_C_SetIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatBarSquare.StatBarSquare_C.PlayStatBarSquareAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayAnim                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatBarSquare_C::PlayStatBarSquareAnim(bool PlayAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatBarSquare_C", "PlayStatBarSquareAnim");

	Params::UStatBarSquare_C_PlayStatBarSquareAnim_Params Parms{};

	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatBarSquare.StatBarSquare_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatBarSquare_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatBarSquare_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatBarSquare.StatBarSquare_C.AnimStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatBarSquare_C::AnimStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatBarSquare_C", "AnimStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatBarSquare.StatBarSquare_C.ExecuteUbergraph_StatBarSquare
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PlayAnim                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatBarSquare_C::ExecuteUbergraph_StatBarSquare(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, bool K2Node_CustomEvent_PlayAnim, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatBarSquare_C", "ExecuteUbergraph_StatBarSquare");

	Params::UStatBarSquare_C_ExecuteUbergraph_StatBarSquare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayAnim = K2Node_CustomEvent_PlayAnim;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


