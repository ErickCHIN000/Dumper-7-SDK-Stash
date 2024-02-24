#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeapInterface_ATL.BPWeapInterface_ATL_C
// (None)

class UClass* IBPWeapInterface_ATL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeapInterface_ATL_C");

	return Clss;
}


// BPWeapInterface_ATL_C BPWeapInterface_ATL.Default__BPWeapInterface_ATL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPWeapInterface_ATL_C* IBPWeapInterface_ATL_C::GetDefaultObj()
{
	static class IBPWeapInterface_ATL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPWeapInterface_ATL_C*>(IBPWeapInterface_ATL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeapInterface_ATL.BPWeapInterface_ATL_C.SetEmissiveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BaseColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                HighlightColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                MarkerBaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                MarkerHighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                HomingOverrideBase                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NewParamHomingOverrideHighlight                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPWeapInterface_ATL_C::SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeapInterface_ATL_C", "SetEmissiveData");

	Params::IBPWeapInterface_ATL_C_SetEmissiveData_Params Parms{};

	Parms.BaseColor = BaseColor;
	Parms.HighlightColor = HighlightColor;
	Parms.MarkerBaseColor = MarkerBaseColor;
	Parms.MarkerHighlightColor = MarkerHighlightColor;
	Parms.HomingOverrideBase = HomingOverrideBase;
	Parms.NewParamHomingOverrideHighlight = NewParamHomingOverrideHighlight;

	UObject::ProcessEvent(Func, &Parms);

}

}


