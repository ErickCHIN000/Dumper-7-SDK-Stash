#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_Shaman_02.BPAnim_Shaman_02_C
// (None)

class UClass* UBPAnim_Shaman_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_Shaman_02_C");

	return Clss;
}


// BPAnim_Shaman_02_C BPAnim_Shaman_02.Default__BPAnim_Shaman_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_Shaman_02_C* UBPAnim_Shaman_02_C::GetDefaultObj()
{
	static class UBPAnim_Shaman_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_Shaman_02_C*>(UBPAnim_Shaman_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_Shaman_02.BPAnim_Shaman_02_C.ExecuteUbergraph_BPAnim_Shaman_02
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Shaman_02_C::ExecuteUbergraph_BPAnim_Shaman_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Shaman_02_C", "ExecuteUbergraph_BPAnim_Shaman_02");

	Params::UBPAnim_Shaman_02_C_ExecuteUbergraph_BPAnim_Shaman_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


