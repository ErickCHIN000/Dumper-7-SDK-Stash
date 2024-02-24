#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RadarSquare.UMG_RadarSquare_C
// (None)

class UClass* UUMG_RadarSquare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RadarSquare_C");

	return Clss;
}


// UMG_RadarSquare_C UMG_RadarSquare.Default__UMG_RadarSquare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RadarSquare_C* UUMG_RadarSquare_C::GetDefaultObj()
{
	static class UUMG_RadarSquare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RadarSquare_C*>(UUMG_RadarSquare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RadarSquare.UMG_RadarSquare_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RadarSquare_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarSquare_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RadarSquare.UMG_RadarSquare_C.ExecuteUbergraph_UMG_RadarSquare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUMG_RadarMainScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadarMainScreen_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_WorldSpaceToMapCanvasSpace_MapLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_WorldSpaceToMapCanvasSpace_MapLocation_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetAbs2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RadarSquare_C::ExecuteUbergraph_UMG_RadarSquare(int32 EntryPoint, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, const struct FVector2D& CallFunc_WorldSpaceToMapCanvasSpace_MapLocation, const struct FVector2D& CallFunc_WorldSpaceToMapCanvasSpace_MapLocation_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetAbs2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarSquare_C", "ExecuteUbergraph_UMG_RadarSquare");

	Params::UUMG_RadarSquare_C_ExecuteUbergraph_UMG_RadarSquare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_WorldSpaceToMapCanvasSpace_MapLocation = CallFunc_WorldSpaceToMapCanvasSpace_MapLocation;
	Parms.CallFunc_WorldSpaceToMapCanvasSpace_MapLocation_1 = CallFunc_WorldSpaceToMapCanvasSpace_MapLocation_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetAbs2D_ReturnValue = CallFunc_GetAbs2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


