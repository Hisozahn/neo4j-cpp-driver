/* GraphDatabase is the main access point to a running Neo4j instance
 * through HTTP protocol.
 *
 * Copyright (c) 2012-2013 Fu Haiping <haipingf@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _NEO4JCPP_GRAPHDATABASE_H_
#define _NEO4JCPP_GRAPHDATABASE_H_

namespace neo4jcpp {

class GraphDatabase {

public:
    Node CreateNode();

private:
    std::string url_;
    std::string port_;

};

}
#endif // _NEO4JCPP_GRAPHDATABASESERVICE_H_