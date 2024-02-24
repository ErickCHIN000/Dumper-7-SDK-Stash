#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass OB_Scan00_100_Skeleton_AnimAB.OB_Scan00_100_Skeleton_AnimAB_C
// (None)

class UClass* UOB_Scan00_100_Skeleton_AnimAB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OB_Scan00_100_Skeleton_AnimAB_C");

	return Clss;
}


// OB_Scan00_100_Skeleton_AnimAB_C OB_Scan00_100_Skeleton_AnimAB.Default__OB_Scan00_100_Skeleton_AnimAB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOB_Scan00_100_Skeleton_AnimAB_C* UOB_Scan00_100_Skeleton_AnimAB_C::GetDefaultObj()
{
	static class UOB_Scan00_100_Skeleton_AnimAB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOB_Scan00_100_Skeleton_AnimAB_C*>(UOB_Scan00_100_Skeleton_AnimAB_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OB_Scan00_100_Skeleton_AnimAB.OB_Scan00_100_Skeleton_AnimAB_C.ExecuteUbergraph_OB_Scan00_100_Skeleton_AnimAB
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOB_Scan00_100_Skeleton_AnimAB_C::ExecuteUbergraph_OB_Scan00_100_Skeleton_AnimAB(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OB_Scan00_100_Skeleton_AnimAB_C", "ExecuteUbergraph_OB_Scan00_100_Skeleton_AnimAB");

	Params::UOB_Scan00_100_Skeleton_AnimAB_C_ExecuteUbergraph_OB_Scan00_100_Skeleton_AnimAB_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


