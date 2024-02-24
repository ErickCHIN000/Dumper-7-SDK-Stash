#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// WidgetBlueprintGeneratedClass JigContextMenuCanvas.JigContextMenuCanvas_C
class UJigContextMenuCanvas_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UJigContextMenuW_C*                    JigContextMenuW;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJigContextMenuCanvas_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_JigContextMenuCanvas(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UJigContextMenuComp_C* CallFunc_GetComponentByClass_ReturnValue, bool Temp_bool_IsClosed_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UJigContextMenuComp_C* CallFunc_GetComponentByClass_ReturnValue_1);
};

}


