#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x510 - 0x500)
// BlueprintGeneratedClass LoadingScreen.LoadingScreen_C
class ALoadingScreen_C : public ATTLLoadingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x500(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALoadingScreen_C* GetDefaultObj();

	void UserConstructionScript();
	void SetupContents();
	void ExecuteUbergraph_LoadingScreen(int32 EntryPoint, class UCmn_load_top00_C* K2Node_DynamicCast_AsCmn_Load_Top_00, bool K2Node_DynamicCast_bSuccess, class UCmn_load_top00_C* K2Node_DynamicCast_AsCmn_Load_Top_001, bool K2Node_DynamicCast_bSuccess1, class UCmn_load_icon00_C* K2Node_DynamicCast_AsCmn_Load_Icon_00, bool K2Node_DynamicCast_bSuccess2);
};

}


