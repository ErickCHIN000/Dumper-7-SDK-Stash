#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_simpleFogSheet.BP_simpleFogSheet_C
// (Actor)

class UClass* ABP_simpleFogSheet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_simpleFogSheet_C");

	return Clss;
}


// BP_simpleFogSheet_C BP_simpleFogSheet.Default__BP_simpleFogSheet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_simpleFogSheet_C* ABP_simpleFogSheet_C::GetDefaultObj()
{
	static class ABP_simpleFogSheet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_simpleFogSheet_C*>(ABP_simpleFogSheet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_simpleFogSheet.BP_simpleFogSheet_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_simpleFogSheet_C::SetColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_simpleFogSheet_C", "SetColor");

	Params::ABP_simpleFogSheet_C_SetColor_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_simpleFogSheet.BP_simpleFogSheet_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_simpleFogSheet_C::Refresh(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_simpleFogSheet_C", "Refresh");

	Params::ABP_simpleFogSheet_C_Refresh_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_simpleFogSheet.BP_simpleFogSheet_C.SaveOriginalColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_simpleFogSheet_C::SaveOriginalColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_simpleFogSheet_C", "SaveOriginalColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_simpleFogSheet.BP_simpleFogSheet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_simpleFogSheet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_simpleFogSheet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_simpleFogSheet.BP_simpleFogSheet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_simpleFogSheet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_simpleFogSheet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_simpleFogSheet.BP_simpleFogSheet_C.ExecuteUbergraph_BP_simpleFogSheet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_simpleFogSheet_C::ExecuteUbergraph_BP_simpleFogSheet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_simpleFogSheet_C", "ExecuteUbergraph_BP_simpleFogSheet");

	Params::ABP_simpleFogSheet_C_ExecuteUbergraph_BP_simpleFogSheet_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


