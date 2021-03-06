//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#pragma once

#include "Scenario2_XmlWriter.g.h"
#include "MainPage.h"

namespace winrt::SDKTemplate::implementation
{
    struct Scenario2_XmlWriter : Scenario2_XmlWriterT<Scenario2_XmlWriter>
    {
        Scenario2_XmlWriter();

        fire_and_forget DoSomething_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);

    private:
        void WriteXml(com_ptr<IStream> const& writeStream);
    };
}

namespace winrt::SDKTemplate::factory_implementation
{
    struct Scenario2_XmlWriter : Scenario2_XmlWriterT<Scenario2_XmlWriter, implementation::Scenario2_XmlWriter>
    {
    };
}
