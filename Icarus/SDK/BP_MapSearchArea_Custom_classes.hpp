#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x31C - 0x2E0)
// BlueprintGeneratedClass BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C
class ABP_MapSearchArea_Custom_C : public AMapSearchAreaProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUMG_RadarSquare_C*                    Widget;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3436[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapIconsRowHandle                    MapIconData;                                       // 0x304(0x18)(Edit, BlueprintVisible, Net, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapSearchArea_Custom_C* GetDefaultObj();

	void OnRep_MapIconData(bool CallFunc_IsRowHandleValid_ReturnValue);
	void OnLoaded_8EBA724943AB38CE185D73B81B2F7D71(class UObject* Loaded);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MapSearchArea_Custom(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FMapSearchArea& CallFunc_GetMapSearchAreaStruct_MapSearchArea, enum class EValid CallFunc_GetMapSearchAreaStruct_Paths, bool CallFunc_IsRowHandleValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, class UUMG_RadarSquare_C* CallFunc_AddQuestSearchArea_Widget);
};

}


