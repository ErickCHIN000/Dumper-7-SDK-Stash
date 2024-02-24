#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_WirePin.UMG_WirePin_C
// (None)

class UClass* UUMG_WirePin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_WirePin_C");

	return Clss;
}


// UMG_WirePin_C UMG_WirePin.Default__UMG_WirePin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_WirePin_C* UUMG_WirePin_C::GetDefaultObj()
{
	static class UUMG_WirePin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_WirePin_C*>(UUMG_WirePin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_WirePin.UMG_WirePin_C.GetPinSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WirePin_C::GetPinSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WirePin_C", "GetPinSize");

	Params::UUMG_WirePin_C_GetPinSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function UMG_WirePin.UMG_WirePin_C.SetPinColour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WirePin_C::SetPinColour(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WirePin_C", "SetPinColour");

	Params::UUMG_WirePin_C_SetPinColour_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WirePin.UMG_WirePin_C.ExecuteUbergraph_UMG_WirePin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColorAndOpacity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WirePin_C::ExecuteUbergraph_UMG_WirePin(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WirePin_C", "ExecuteUbergraph_UMG_WirePin");

	Params::UUMG_WirePin_C_ExecuteUbergraph_UMG_WirePin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InColorAndOpacity = K2Node_CustomEvent_InColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}

}


