#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_Occlusion_Volume_Interface.UDS_Occlusion_Volume_Interface_C
// (None)

class UClass* IUDS_Occlusion_Volume_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_Occlusion_Volume_Interface_C");

	return Clss;
}


// UDS_Occlusion_Volume_Interface_C UDS_Occlusion_Volume_Interface.Default__UDS_Occlusion_Volume_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUDS_Occlusion_Volume_Interface_C* IUDS_Occlusion_Volume_Interface_C::GetDefaultObj()
{
	static class IUDS_Occlusion_Volume_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUDS_Occlusion_Volume_Interface_C*>(IUDS_Occlusion_Volume_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UDS_Occlusion_Volume_Interface.UDS_Occlusion_Volume_Interface_C.Get Occlusion Result
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Weather                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Occluded                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUDS_Occlusion_Volume_Interface_C::Get_Occlusion_Result(bool Weather, bool* Occluded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UDS_Occlusion_Volume_Interface_C", "Get Occlusion Result");

	Params::IUDS_Occlusion_Volume_Interface_C_Get_Occlusion_Result_Params Parms{};

	Parms.Weather = Weather;

	UObject::ProcessEvent(Func, &Parms);

	if (Occluded != nullptr)
		*Occluded = Parms.Occluded;

}

}


