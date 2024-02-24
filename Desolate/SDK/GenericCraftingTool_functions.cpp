#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericCraftingTool.GenericCraftingTool_C
// (Actor)

class UClass* AGenericCraftingTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericCraftingTool_C");

	return Clss;
}


// GenericCraftingTool_C GenericCraftingTool.Default__GenericCraftingTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericCraftingTool_C* AGenericCraftingTool_C::GetDefaultObj()
{
	static class AGenericCraftingTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericCraftingTool_C*>(AGenericCraftingTool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericCraftingTool.GenericCraftingTool_C.GetSelectionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FS_Selection                K2Node_MakeStruct_S_Selection                                    (HasGetValueTypeHash)

void AGenericCraftingTool_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftingTool_C", "GetSelectionInfo");

	Params::AGenericCraftingTool_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_S_Selection = K2Node_MakeStruct_S_Selection;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}

}


