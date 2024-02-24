#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropshipPartSmall.UMG_DropshipPartSmall_C
// (None)

class UClass* UUMG_DropshipPartSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropshipPartSmall_C");

	return Clss;
}


// UMG_DropshipPartSmall_C UMG_DropshipPartSmall.Default__UMG_DropshipPartSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropshipPartSmall_C* UUMG_DropshipPartSmall_C::GetDefaultObj()
{
	static class UUMG_DropshipPartSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropshipPartSmall_C*>(UUMG_DropshipPartSmall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_DropshipEditor_Dropship_C*Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipPartSmall_C::Initialise(class UUMG_DropshipEditor_Dropship_C* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipPartSmall_C", "Initialise");

	Params::UUMG_DropshipPartSmall_C_Initialise_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRocketableData             CallFunc_GetRocketableData_Rocketable                            (None)
// enum class EDataValid              CallFunc_GetRocketableData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropshipPartSmall_C::UpdateState(const struct FRocketableData& CallFunc_GetRocketableData_Rocketable, enum class EDataValid CallFunc_GetRocketableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipPartSmall_C", "UpdateState");

	Params::UUMG_DropshipPartSmall_C_UpdateState_Params Parms{};

	Parms.CallFunc_GetRocketableData_Rocketable = CallFunc_GetRocketableData_Rocketable;
	Parms.CallFunc_GetRocketableData_Paths = CallFunc_GetRocketableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_DropshipPartSmall_C::Update(const struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipPartSmall_C", "Update");

	Params::UUMG_DropshipPartSmall_C_Update_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.OnLoaded_6FF29948471A55576D5E19A5F0534075
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipPartSmall_C::OnLoaded_6FF29948471A55576D5E19A5F0534075(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipPartSmall_C", "OnLoaded_6FF29948471A55576D5E19A5F0534075");

	Params::UUMG_DropshipPartSmall_C_OnLoaded_6FF29948471A55576D5E19A5F0534075_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_DropshipPartSmall_C::LoadIcon(TSoftObjectPtr<class UTexture2D> Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipPartSmall_C", "LoadIcon");

	Params::UUMG_DropshipPartSmall_C_LoadIcon_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.ExecuteUbergraph_UMG_DropshipPartSmall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_Texture                                       (HasGetValueTypeHash)

void UUMG_DropshipPartSmall_C::ExecuteUbergraph_UMG_DropshipPartSmall(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipPartSmall_C", "ExecuteUbergraph_UMG_DropshipPartSmall");

	Params::UUMG_DropshipPartSmall_C_ExecuteUbergraph_UMG_DropshipPartSmall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;

	UObject::ProcessEvent(Func, &Parms);

}

}


