#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemDong_VoidImp_Skin.BP_ItemDong_VoidImp_Skin_C
// (Actor)

class UClass* ABP_ItemDong_VoidImp_Skin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemDong_VoidImp_Skin_C");

	return Clss;
}


// BP_ItemDong_VoidImp_Skin_C BP_ItemDong_VoidImp_Skin.Default__BP_ItemDong_VoidImp_Skin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemDong_VoidImp_Skin_C* ABP_ItemDong_VoidImp_Skin_C::GetDefaultObj()
{
	static class ABP_ItemDong_VoidImp_Skin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemDong_VoidImp_Skin_C*>(ABP_ItemDong_VoidImp_Skin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemDong_VoidImp_Skin.BP_ItemDong_VoidImp_Skin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemDong_VoidImp_Skin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemDong_VoidImp_Skin_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemDong_VoidImp_Skin.BP_ItemDong_VoidImp_Skin_C.ExecuteUbergraph_BP_ItemDong_VoidImp_Skin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemDong_VoidImp_Skin_C::ExecuteUbergraph_BP_ItemDong_VoidImp_Skin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemDong_VoidImp_Skin_C", "ExecuteUbergraph_BP_ItemDong_VoidImp_Skin");

	Params::ABP_ItemDong_VoidImp_Skin_C_ExecuteUbergraph_BP_ItemDong_VoidImp_Skin_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


