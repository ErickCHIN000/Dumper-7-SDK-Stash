#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SelectionInfo.SelectionInfo_C
// (None)

class UClass* ISelectionInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectionInfo_C");

	return Clss;
}


// SelectionInfo_C SelectionInfo.Default__SelectionInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ISelectionInfo_C* ISelectionInfo_C::GetDefaultObj()
{
	static class ISelectionInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ISelectionInfo_C*>(ISelectionInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SelectionInfo.SelectionInfo_C.GetSelectionInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)

void ISelectionInfo_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectionInfo_C", "GetSelectionInfo");

	Params::ISelectionInfo_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}

}


