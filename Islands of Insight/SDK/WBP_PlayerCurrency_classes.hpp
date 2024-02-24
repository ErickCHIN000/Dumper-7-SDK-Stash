#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2D0 - 0x2C8)
// WidgetBlueprintGeneratedClass WBP_PlayerCurrency.WBP_PlayerCurrency_C
class UWBP_PlayerCurrency_C : public UPlayerCurrencyWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_PlayerCurrency_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_PlayerCurrency(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


