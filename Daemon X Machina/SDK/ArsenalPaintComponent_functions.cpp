#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalPaintComponent.ArsenalPaintComponent_C
// (None)

class UClass* UArsenalPaintComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalPaintComponent_C");

	return Clss;
}


// ArsenalPaintComponent_C ArsenalPaintComponent.Default__ArsenalPaintComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalPaintComponent_C* UArsenalPaintComponent_C::GetDefaultObj()
{
	static class UArsenalPaintComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalPaintComponent_C*>(UArsenalPaintComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalPaintComponent.ArsenalPaintComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalPaintComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPaintComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalPaintComponent.ArsenalPaintComponent_C.ExecuteUbergraph_ArsenalPaintComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalPaintComponent_C::ExecuteUbergraph_ArsenalPaintComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPaintComponent_C", "ExecuteUbergraph_ArsenalPaintComponent");

	Params::UArsenalPaintComponent_C_ExecuteUbergraph_ArsenalPaintComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


