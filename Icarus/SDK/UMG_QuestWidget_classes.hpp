#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2B8 - 0x280)
// WidgetBlueprintGeneratedClass UMG_QuestWidget.UMG_QuestWidget_C
class UUMG_QuestWidget_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IconImage;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             IconScaleBox;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                               WorldSpaceCenter;                                  // 0x298(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               WorldSpaceSize;                                    // 0x2A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               QuestRef;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_QuestWidget_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_QuestWidget(int32 EntryPoint, class UUMG_QuestTooltip_C* CallFunc_Create_ReturnValue, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector2D& CallFunc_WorldSpaceToMapCanvasSpace_MapLocation, const struct FVector2D& CallFunc_WorldSpaceToMapCanvasSpace_MapLocation_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetAbs2D_ReturnValue);
};

}


