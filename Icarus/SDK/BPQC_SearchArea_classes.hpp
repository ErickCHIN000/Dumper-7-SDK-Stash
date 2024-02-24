#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xE0 - 0xB0)
// BlueprintGeneratedClass BPQC_SearchArea.BPQC_SearchArea_C
class UBPQC_SearchArea_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FMapSearchAreaRowHandle               SearchArea;                                        // 0xB8(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUMG_RadarSquare_C*                    Widget;                                            // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAutoAdd;                                          // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_616D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Radius;                                            // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPQC_SearchArea_C* GetDefaultObj();

	void AttemptInitialise();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void AddSearchArea(const struct FMapSearchAreaRowHandle& SearchArea, int32 Radius);
	void RemoveSearchArea();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPQC_SearchArea(int32 EntryPoint, const struct FMapSearchArea& CallFunc_GetMapSearchAreaStruct_MapSearchArea, enum class EValid CallFunc_GetMapSearchAreaStruct_Paths, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FMapSearchAreaRowHandle& K2Node_CustomEvent_SearchArea, int32 K2Node_CustomEvent_Radius, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_Multiply_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UIcarusMapScreenBase* CallFunc_GetMap_Radar, class UUMG_RadarMainScreen_C* K2Node_DynamicCast_AsUMG_Radar_Main_Screen, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2, class UUMG_RadarSquare_C* CallFunc_AddQuestSearchArea_Widget, bool CallFunc_IsValid_ReturnValue_3);
};

}


